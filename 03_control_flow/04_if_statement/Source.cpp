/**
 * Przykład użycia instrukcji warunkowej `if` w C++
 * 
 * Opis:
 * - Program demonstruje prostą instrukcję warunkową `if` do sprawdzania wartości zmiennej `a`.
 * - Instrukcja `if` sprawdza, czy wyrażenie logiczne (warunek) jest prawdziwe (`true`).
 *   Jeśli warunek jest spełniony, wykonywane są instrukcje zawarte wewnątrz bloku `if`.
 * 
 * Składnia:
 * if (wyrażenie logiczne)
 * {
 *     // Instrukcje do wykonania, jeśli wyrażenie logiczne jest prawdziwe
 * }
 */

#include <iostream>

int main()
{
    int a = 10; // Zmienna `a` o wartości początkowej 10

    std::cout << "This program checks the value of a.\n";

    // Instrukcja `if` sprawdzająca, czy wartość `a` jest równa 6
    if (a == 6)
    {
        // Jeśli warunek (a == 6) jest prawdziwy, ten blok zostanie wykonany
        std::cout << "a is equal to a half dozen.\n";
    }

    // Instrukcja wykonana niezależnie od wyniku sprawdzenia `if`
    std::cout << "There is not much to say about a\n";
    return 0;
}
