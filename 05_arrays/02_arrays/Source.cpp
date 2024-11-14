/**
 * Przykład użycia tablic w C++
 * 
 * Opis:
 * - Tablica to struktura danych przechowująca sekwencyjnie elementy tego samego typu.
 * - Tablice są używane do przechowywania zbiorów danych o ustalonym rozmiarze.
 * - Elementy tablicy są dostępne za pomocą indeksów (od 0 do n-1, gdzie n to rozmiar tablicy).
 * - Tablice są przechowywane w pamięci jako ciągłe bloki pamięci.
 */

#include <iostream>

int main()
{
    // Deklaracja tablicy w C++ (inicjalizacja za pomocą listy wartości)
    // Typ zmiennej `int` wskazuje, że tablica przechowuje liczby całkowite
    int my_array1[]{ 1, 2, 3, 4, 5 }; // Rozmiar tablicy jest automatycznie określony przez liczbę elementów

    // Alternatywna deklaracja tablicy z określeniem rozmiaru (ale bez inicjalizacji)
    int my_array2[10]; // Tablica o rozmiarze 10, ale niezainicjalizowana (wartości mogą być przypadkowe)

    // Wyświetlanie wartości z tablicy `my_array1` przy użyciu pętli `for-each` (zakresowej pętli `for`)
    for (const auto& e : my_array1)
        std::cout << e << " "; // `e` jest referencją do elementu tablicy
    std::cout << std::endl;

    return 0;
}
