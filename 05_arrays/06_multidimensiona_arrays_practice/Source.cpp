/**
 * Przykład mnożenia macierzy 4x4 przez wektor w C++
 * 
 * Opis:
 * - Program mnoży macierz 4x4 przez wektor o długości 4.
 * - Wynik mnożenia jest zapisywany w wektorze `output`.
 * - Operacja ilustruje podstawy mnożenia macierzy przez wektor.
 * - W tym przypadku każda wartość `output[i]` jest sumą iloczynów odpowiednich elementów wiersza macierzy `mat` i elementów wektora `vec`.
 */

#include <iostream>

int main()
{
    // Deklaracja i inicjalizacja macierzy 4x4
    int mat[4][4]
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    // Deklaracja i inicjalizacja wektora o długości 4
    int vec[4]{ 2, 2, 2, 2 };

    // Wektor przechowujący wynik mnożenia
    int output[4]{0}; // Inicjalizacja elementów na `0`

    // Mnożenie macierzy przez wektor
    // https://pl.wikipedia.org/wiki/Mno%C5%BCenie_macierzy
    for (int i{0}; i < 4; ++i) // Iteracja po wierszach macierzy
    {
        for (int j{0}; j < 4; ++j) // Iteracja po kolumnach macierzy
        {
            // Mnożenie elementów macierzy przez odpowiednie elementy wektora i dodanie do `output[i]`
            output[i] += mat[i][j] * vec[j];
        }
    }

    // Wyświetlanie wyników mnożenia
    std::cout << "Output vector: ";
    for (const auto& e : output)
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}
