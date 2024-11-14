/**
 * Przykład użycia std::fstream do jednoczesnego zapisu i odczytu z pliku
 * 
 * Opis:
 * - std::fstream umożliwia jednoczesne operacje zapisu i odczytu w jednym obiekcie.
 * - Program otwiera plik w trybie dopisywania, zapisuje dane, a następnie zamyka i ponownie otwiera plik do odczytu.
 * - Pokazuje, jak efektywnie używać std::fstream do pracy z plikami.
 */

#include <iostream>
#include <fstream>
#include <string>
#include <ios> // Zawiera definicje trybów otwierania plików

int main()
{
    std::string line{};

    // Tworzenie obiektu std::fstream do zapisu danych w trybie dopisywania (std::ios::app)
    std::fstream my_file("input.txt", std::ios::app);

    // Sprawdzanie, czy plik został poprawnie otwarty
    if (my_file.is_open())
    {
        // Dodawanie linii tekstu do pliku
        my_file << "\nI am adding a line.\n";
        my_file << "I am adding another line.\n";

        // Zamknięcie pliku po zakończeniu operacji zapisu
        my_file.close();
    }
    else
        std::cout << "Unable to open file.\n";

    // Ponowne otwarcie pliku w trybie domyślnym (do odczytu)
    my_file.open("input.txt");

    // Sprawdzanie, czy plik został poprawnie otwarty
    if (my_file.is_open())
    {
        // Odczyt linii tekstu z pliku i ich wyświetlanie
        while (std::getline(my_file, line))
        {
            std::cout << line << std::endl;
        }
        // Zamknięcie pliku po zakończeniu operacji odczytu
        my_file.close();
    }
    else
        std::cout << "Unable to open file.\n";

    return 0;
}
