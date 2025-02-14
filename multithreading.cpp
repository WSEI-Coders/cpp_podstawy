#include <iostream>     // Strumienie wejścia/wyjścia (std::cout, std::endl)
#include <vector>       // Dynamiczna tablica (std::vector)
#include <string>       // Manipulacja tekstem (std::string)
#include <random>       // Generowanie liczb losowych (std::random_device, std::mt19937, std::uniform_real_distribution)
#include <thread>       // Programowanie wielowątkowe (std::thread)
#include <mutex>        // Synchronizacja wątków (std::mutex, std::lock_guard)
#include <algorithm>    // Algorytmy STL (std::sort, std::min, std::max)
#include <limits>       // Stałe dla typów numerycznych (std::numeric_limits)
#include <execution>    // Wykonywanie równoległe (std::execution::par)

// Klasa przechowująca dane o mieście
class City {
public:
    std::string name;               // Nazwa miasta
    std::vector<double> temperatures; // Wektor temperatur (365 dni w roku)

    // Konstruktor: inicjalizuje miasto i rezerwuje miejsce na 365 temperatur
    City(std::string&& city_name, int days = 365)
        : name(std::move(city_name)), temperatures(days) {}
};

// Klasa analizująca pogodę
class WeatherAnalyzer {
private:
    std::vector<City> cities;    // Wektor przechowujący miasta
    std::mutex cout_mutex;       // Mutex do synchronizacji wyjścia na konsolę
    std::mutex min_max_mutex;    // Mutex do synchronizacji globalnych min/max temperatur
    double global_min = std::numeric_limits<double>::max();  // Początkowa wartość minimalnej temperatury
    double global_max = std::numeric_limits<double>::min();  // Początkowa wartość maksymalnej temperatury
    unsigned int num_threads{};    // Liczba dostępnych wątków
    int num_cities{};            // Liczba miast do analizy
    int progress_step{};         // Krok postępu (co ile miast wypisywać postęp)

public:
    // Konstruktor inicjalizujący analizator pogody
    WeatherAnalyzer(int n_c = 100, int p_s = 10)
        : num_cities(n_c), progress_step(p_s) {
        num_threads = std::thread::hardware_concurrency(); // Pobranie liczby dostępnych rdzeni procesora
        if (num_threads == 0) num_threads = 4; // Domyślnie 4 wątki, jeśli system nie podaje dokładnej liczby

        std::cout << "You have " << num_threads << " threads. Use " << num_threads << " threads.\n";

        // Tworzenie listy miast
        for (int i = 0; i < num_cities; ++i) {
            cities.emplace_back("City" + std::to_string(i + 1));
        }
    }

    // Funkcja do generowania fikcyjnych temperatur
    void generate_weather_data(int start, int end, double low_temp, double hight_temp) {
        std::random_device rd;   // Źródło entropii do losowania
        std::mt19937 gen(rd());  // Generator liczb losowych
        std::uniform_real_distribution<> dist(low_temp, hight_temp); // Rozkład równomierny temperatur

        for (int i = start; i < end; ++i) {
            for (double& temp : cities[i].temperatures) {
                temp = dist(gen); // Przypisanie losowej temperatury
            }

            // Co 'progress_step' miast wypisujemy komunikat
            if (i % progress_step == 0) {
                std::lock_guard<std::mutex> lock(cout_mutex);
                std::cout << "[INFO] Generate data.... Finished for: " << cities[i].name << std::endl;
            }
        }
    }

    // Funkcja analizująca temperatury w jednym mieście
    void process_city_weather(const City& city) {
        std::vector<double> temps = city.temperatures; // Kopia wektora temperatur

        // Sortowanie temperatur w trybie równoległym
        std::sort(std::execution::par, temps.begin(), temps.end());

        double median = temps[city.temperatures.size() / 2]; // Mediana (wartość środkowa)
        double local_min = temps.front(); // Najniższa temperatura
        double local_max = temps.back();  // Najwyższa temperatura

        // Aktualizacja globalnego minimum i maksimum
        {
            std::lock_guard<std::mutex> lock(min_max_mutex);
            global_min = std::min(global_min, local_min);
            global_max = std::max(global_max, local_max);
        }

        // Wyświetlenie wyników dla miasta
        {
            std::lock_guard<std::mutex> lock(cout_mutex);
            std::cout << city.name << " - median: " << median << std::endl;
        }
    }

    // Funkcja do zarządzania procesem analizy miast
    void analyze_weather_data(int start, int end) {
        for (int i = start; i < end; ++i) {
            process_city_weather(cities[i]);

            // Co 'progress_step' miast wypisujemy komunikat
            if (i % progress_step == 0) {
                std::lock_guard<std::mutex> lock(cout_mutex);
                std::cout << "[INFO] Analysis in progress..." << std::endl;
            }
        }
    }


    // Funkcja sterująca generowaniem i analizą danych
    void run(double low_temp=-25.0, double high_temp=45.0) {
        std::vector<std::thread> workers;
        int chunk_size = num_cities / num_threads; // Podział miast na bloki dla wątków

        // Generowanie danych pogodowych
        for (unsigned int i = 0; i < num_threads; ++i) {
            int start = i * chunk_size;
            int end = (i == num_threads - 1) ? num_cities : start + chunk_size;
            workers.emplace_back(&WeatherAnalyzer::generate_weather_data, this, start, end, low_temp, high_temp);
        }

        // Czekamy na zakończenie generowania
        for (auto& worker : workers) {
            worker.join();
        }

        std::cout << "[INFO] Data generation finished!\n";

        // Analiza danych pogodowych
        workers.clear(); // Czyścimy wektor wątków
        for (unsigned int i = 0; i < num_threads; ++i) {
            int start = i * chunk_size;
            int end = (i == num_threads - 1) ? num_cities : start + chunk_size;
            workers.emplace_back(&WeatherAnalyzer::analyze_weather_data, this, start, end);
        }

        // Czekamy na zakończenie analizy
        for (auto& worker : workers) {
            worker.join();
        }

        // Wyświetlenie globalnego minimum i maksimum temperatur
        std::cout << "\n[RESULT] Lowest global temperature: " << global_min << std::endl;
        std::cout << "[RESULT] Highest global temperature: " << global_max << std::endl;
    }
};

int main() {
    WeatherAnalyzer analyzer; // Tworzymy obiekt analizatora pogody
    analyzer.run();           // Uruchamiamy analizę, opcjonalne parametry to minimalna i maksymalna temperatura
    return 0;
}
