/**
 * Przykład użycia funkcji z parametrami przekazywanymi przez referencję w C++
 * 
 * Opis:
 * - Funkcja `printProduct()` przyjmuje trzy parametry, które są przekazywane przez referencję.
 * - Przekazywanie przez referencję pozwala na modyfikowanie wartości zmiennych przekazanych do funkcji.
 * - Parametry przekazywane przez referencję używają symbolu `&` w deklaracji funkcji.
 */

#include <iostream>

// Deklaracja funkcji `printProduct()` z parametrami przekazywanymi przez referencję
void printProduct(int& m1, int& m2, int& product);

int main()
{
    int m1 = 4; // Pierwszy mnożnik
    int m2 = 5; // Drugi mnożnik
    int product; // Zmienna przechowująca wynik mnożenia

    // Obliczenie iloczynu
    product = m1 * m2;

    // Wywołanie funkcji `printProduct()` z przekazaniem zmiennych przez referencję
    printProduct(m1, m2, product);
    std::cout << std::endl; // Wyświetlenie nowej linii
    return 0;
}

// Definicja funkcji `printProduct()`
// Funkcja wyświetla wynik mnożenia dwóch liczb
void printProduct(int& m1, int& m2, int& product)
{
    // Wyświetlenie mnożenia i jego wyniku
    std::cout << m1 << " * " << m2 << " = " << product;
}
