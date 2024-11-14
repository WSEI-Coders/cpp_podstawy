/**
 * Przykład użycia operatora adresu `&` w C++
 * 
 * Opis:
 * - Program demonstruje, jak uzyskać i wyświetlić adres pamięci zmiennej przy użyciu operatora `&`.
 * - Operator `&` zwraca adres pamięci zmiennej, co jest kluczowe dla zrozumienia wskaźników i manipulacji pamięcią w C++.
 */

#include <iostream>

int main()
{
    // Zmienna całkowita `a` o wartości 54
    int a = 54;

    // Wyświetlenie wartości zmiennej `a`
    std::cout << "a = " << a << "\n";

    // Operator `&a` zwraca adres pamięci zmiennej `a`
    // Adres ten jest wyświetlany w formacie szesnastkowym (adres pamięci RAM)
    std::cout << "Address of a is at &a = " << &a << "\n";

    return 0;
}
