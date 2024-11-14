/**
 * Przykład operacji na plikach w C++ z użyciem <fstream>
 * 
 * Opis:
 * - Program demonstruje podstawowe operacje zapisu i odczytu pliku tekstowego za pomocą
 *   strumieni std::ofstream i std::ifstream.
 * - std::ios::app jest używane do otwarcia pliku w trybie "append" (dodawanie nowych linii na końcu pliku).
 * - Pokazuje również, jak używać funkcji std::getline do odczytu linii tekstu z pliku.
 */

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string line;

    // Tworzenie strumienia do zapisu w pliku
    // std::ios::app powoduje, że dane są dopisywane na końcu istniejącego pliku
    std::ofstream myFile("input.txt", std::ios::app);

    // Sprawdzenie, czy plik został poprawnie otwarty
    if (myFile.is_open())
    {
        // Dodawanie nowych linii do pliku
        myFile << "\nI am adding a line.\n";
        myFile << "I am adding another line.\n";
        myFile.close(); // Zamknięcie pliku po zakończeniu operacji zapisu
    }
    else
        std::cout << "Unable to open file for writing\n";

    // Tworzenie strumienia do odczytu z pliku
    std::ifstream myfileO("input.txt");

    // Sprawdzenie, czy plik został poprawnie otwarty
    if (myfileO.is_open())
    {
        // Czytanie linii z pliku i ich wyświetlanie
        while (std::getline(myfileO, line))
        {
            std::cout << line << std::endl;
        }
        myfileO.close(); // Zamknięcie pliku po zakończeniu operacji odczytu
    }
    else
        std::cout << "Unable to open file for reading\n";

    return 0;
}
