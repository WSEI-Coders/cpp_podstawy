/**
 * Program do wprowadzania liczb i obliczania wartości minimalnej, maksymalnej oraz średniej
 * 
 * Opis:
 * - Program prosi użytkownika o wprowadzenie 15 liczb z zakresu od 0 do 100.
 * - Wprowadzona liczba jest sprawdzana pod kątem zakresu; jeśli jest poza zakresem, użytkownik jest proszony o ponowne wprowadzenie liczby.
 * - Program oblicza wartość minimalną, maksymalną oraz średnią wprowadzonych liczb.
 */

#include <iostream>

int main()
{
    // Zmienne przechowujące minimalną, maksymalną i sumę wartości
    int min{ 100 };  // Początkowa wartość `min` ustawiona na 100 (górna granica zakresu)
    int max{ -1 };   // Początkowa wartość `max` ustawiona na -1 (dolna granica zakresu)
    int sum{ 0 };    // Suma wprowadzonych liczb
    const int how_many{ 15 }; // Liczba wprowadzanych liczb

    // Informacja dla użytkownika
    std::cout << "Enter " << how_many << " numbers in range [0-100]" << std::endl;

    int i{ 0 }; // Licznik iteracji pętli `while`
    while (i != how_many)
    {
        int num; // Zmienna przechowująca aktualnie wprowadzoną liczbę
        std::cout << "Enter " << i + 1 << " number: ";
        std::cin >> num;

        // Sprawdzenie, czy liczba jest w zakresie [0-100]
        if (num < 0 || num > 100)
        {
            std::cout << "Number out of range. Please enter a number between 0 and 100.\n";
            continue; // Przechodzimy do następnej iteracji pętli (ignorujemy tę wartość)
        }

        // Aktualizacja wartości minimalnej, jeśli `num` jest mniejsze od aktualnego `min`
        if (num < min)
            min = num;

        // Aktualizacja wartości maksymalnej, jeśli `num` jest większe od aktualnego `max`
        if (num > max)
            max = num;

        // Dodanie `num` do sumy
        sum += num;
        ++i; // Zwiększenie licznika iteracji
    }

    // Wyświetlenie wyników
    std::cout << "min: " << min << ", max: " << max << ", average: "
              << (sum / static_cast<double>(how_many)) << std::endl;

    return 0;
}
