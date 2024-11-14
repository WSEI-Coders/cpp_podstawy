/**
 * Przykład użycia funkcji formatowania wyjścia za pomocą biblioteki <iomanip> w C++
 * 
 * Opis:
 * - std::setw ustawia szerokość kolumny dla następnej wyświetlanej wartości.
 * - Służy do kontrolowania układu wyjścia i umożliwia wyrównane formatowanie danych w tabelach.
 * - Kod demonstruje wyświetlanie wartości różnych typów (int, float, double) 
 *   w kolumnach o stałej szerokości dla czytelnego wyjścia.
 */

#include <iostream>
#include <iomanip>

int main()
{
    // Deklaracja i inicjalizacja zmiennych o różnych typach
    int a = 45;
    float b = 45.323f;
    double c = 45.5468;

    // Przykładowe obliczenia
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    // Stała szerokość kolumny
    const int COL_WID{ 10 };

    // Wyświetlenie nagłówka tabeli z wyrównaniem kolumn
    std::cout << std::setw(COL_WID) << "Ints" << std::setw(COL_WID) << "Floats"
              << std::setw(COL_WID) << "Doubles\n";

    // Wyświetlenie wartości w kolumnach o ustalonej szerokości
    std::cout << std::setw(COL_WID) << a << std::setw(COL_WID) << b
              << std::setw(COL_WID) << c << std::endl;
    std::cout << std::setw(COL_WID) << aa << std::setw(COL_WID) << bb
              << std::setw(COL_WID) << cc << std::endl;
    std::cout << std::setw(COL_WID) << aaa << std::setw(COL_WID) << bbb
              << std::setw(COL_WID) << ccc << std::endl;

    return 0;
}
