/**
 * Przykład pobierania danych od użytkownika z klawiatury w C++
 * 
 * Opis:
 * - Program pokazuje, jak używać std::cin do pobierania danych różnych typów od użytkownika.
 * - std::cin służy do wprowadzania danych za pomocą strumienia wejściowego, a std::cout do wyświetlania wyników.
 * - Demonstruje podstawowe operacje wejścia-wyjścia w C++.
 */

#include <iostream>
#include <string> // Włączenie biblioteki do obsługi łańcuchów znaków

int main()
{
    int year{}; // Zmienna przechowująca ulubiony rok użytkownika
    int age{};  // Zmienna przechowująca wiek, w którym użytkownik nauczył się jeździć na rowerze
    std::string name{}; // Zmienna przechowująca imię użytkownika

    // Pobieranie ulubionego roku od użytkownika
    std::cout << "What year is your favorite?: ";
    std::cin >> year;
    // Wyświetlanie odpowiedzi użytkownika
    std::cout << "How interesting, your favorite year is " << year << std::endl;

    // Pobieranie wieku, w którym użytkownik nauczył się jeździć na rowerze
    std::cout << "At what age did you learn to ride a bike? ";
    std::cin >> age;
    // Wyświetlanie odpowiedzi użytkownika
    std::cout << "How interesting you learned to ride at: " << age << std::endl;

    // Pobieranie imienia użytkownika
    std::cout << "What is your name? ";
    std::cin >> name;
    // Wyświetlanie powitania
    std::cout << "Hello " << name << "!" << std::endl;

    return 0;
}
