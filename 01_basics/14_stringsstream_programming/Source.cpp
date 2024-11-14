/**
 * Przykład użycia std::stringstream do konwersji danych wejściowych z tekstu na liczby
 * 
 * Opis:
 * - Program pobiera od użytkownika długość i szerokość pokoju jako tekst, a następnie konwertuje je na liczby.
 * - `std::stringstream` jest wykorzystywany do konwersji ciągów znaków na wartości liczbowe.
 * - Program oblicza pole powierzchni pokoju na podstawie podanych wartości.
 */

#include <iostream>
#include <string>
#include <sstream> // Używane do konwersji ciągów znaków na wartości liczbowe

int main()
{
    std::string input{}; // Zmienna przechowująca dane wejściowe użytkownika jako tekst
    float length{};      // Długość pokoju
    float width{};       // Szerokość pokoju
    float area{};        // Pole powierzchni pokoju

    // Pobieranie długości pokoju od użytkownika
    std::cout << "Enter length of your room: ";
    std::getline(std::cin, input);
    std::stringstream(input) >> length; // Konwersja ciągu tekstowego na wartość float

    // Pobieranie szerokości pokoju od użytkownika
    std::cout << "Enter width of your room: ";
    std::getline(std::cin, input);
    std::stringstream(input) >> width; // Konwersja ciągu tekstowego na wartość float

    // Obliczanie pola powierzchni pokoju
    area = length * width;
    // Wyświetlanie wyniku
    std::cout << "Area of the room: " << area << std::endl;

    return 0;
}
