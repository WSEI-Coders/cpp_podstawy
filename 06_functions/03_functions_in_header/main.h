#pragma once

#include <iostream>

// Deklaracja funkcji `printProduct()`
// Parametry są przekazywane przez referencję
void printProduct(int& m1, int& m2, int& product);

// Definicja funkcji `printProduct()`
void printProduct(int& m1, int& m2, int& product)
{
    // Funkcja wyświetla wynik mnożenia dwóch liczb
    std::cout << m1 << " * " << m2 << " = " << product;
}