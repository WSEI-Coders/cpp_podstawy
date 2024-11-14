/**
 * Przykład użycia tablicy dwuwymiarowej w C++
 * 
 * Opis:
 * - Program demonstruje deklarację i inicjalizację tablicy dwuwymiarowej.
 * - Tablica dwuwymiarowa `array2Dim` przechowuje elementy w układzie wierszy i kolumn.
 * - Program iteruje po tablicy za pomocą zagnieżdżonej pętli `for` i wyświetla wartości poszczególnych elementów.
 */

#include <iostream>

int main()
{
    // Deklaracja i inicjalizacja tablicy dwuwymiarowej
    // Tablica ma 2 wiersze i 3 kolumny, a elementy są inicjalizowane sekwencyjnie
    int array2Dim[2][3] = { 0, 1, 2, 3, 4, 5 };

    // Iteracja przez tablicę dwuwymiarową za pomocą zagnieżdżonych pętli `for`
    for (int i = 0; i < 2; i++) // Pętla iterująca po wierszach
    {
        for (int j = 0; j < 3; j++) // Pętla iterująca po kolumnach
        {
            // Wyświetlenie wartości elementu `array2Dim[i][j]`
            std::cout << "array2Dim[" << i << "][" << j << "] = " << array2Dim[i][j] << "\n";
        }
    }

    return 0;
}
