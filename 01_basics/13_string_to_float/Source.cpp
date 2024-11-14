/**
 * Przykład konwersji ciągu znaków na liczby w C++
 * 
 * Opis:
 * - Program pokazuje dwa sposoby konwersji ciągów znaków na wartości numeryczne:
 *   1. Użycie funkcji z biblioteki <string>, takich jak `std::stof`, `std::stoi`, itp.
 *   2. Użycie obiektu `std::stringstream` z biblioteki <sstream>.
 * - `std::stof` konwertuje ciąg znaków na wartość zmiennoprzecinkową typu `float`.
 * - `std::stringstream` pozwala na bezpieczne i elastyczne przekształcanie ciągów znaków na różne typy danych.
 */

#include <iostream>
#include <string>
#include <sstream> // Używane do konwersji za pomocą std::stringstream

int main()
{
    // Przykład konwersji za pomocą funkcji z biblioteki <string>
    std::string cm{ "17.45" };
    float cm_from_string = std::stof(cm); // Konwersja ciągu znaków na float za pomocą std::stof
    std::cout << "Value converted from string: " << cm_from_string << std::endl;

    // Przykład konwersji za pomocą std::stringstream
    std::string stringLenght;
    float inches{};
    float yardage{};

    // Pobieranie danych od użytkownika
    std::cout << "Enter number of inches: ";
    std::getline(std::cin, stringLenght);

    // Konwersja ciągu znaków na float za pomocą std::stringstream
    std::stringstream(stringLenght) >> inches;
    std::cout << "You entered " << inches << " inches." << std::endl;

    // Obliczenie yardów na podstawie wprowadzonej liczby cali
    yardage = inches / 36;
    std::cout << "Yardage is: " << yardage << std::endl;

    return 0;
}
