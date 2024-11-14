/**
 * Przykład użycia operatorów logicznych w C++
 * 
 * Opis:
 * - Program demonstruje użycie operatorów logicznych `&&` (and), `||` (or) oraz `!` (not).
 * - Operator `&&` (and) zwraca `true`, jeśli oba warunki są spełnione (niezerowe).
 * - Operator `||` (or) zwraca `true`, jeśli przynajmniej jeden z warunków jest spełniony (niezerowy).
 * - Operator `!` (not) neguje wartość logiczną, zamieniając `true` na `false` i odwrotnie.
 * - Wartości logiczne `true` są równe `1`, a `false` są równe `0`.
 */

#include <iostream>
#include <string>

int main()
{
    int A = 5; // Zmienna A z wartością 5
    int B = 4; // Zmienna B z wartością 4
    int C = 5; // Zmienna C z wartością 5
    int D = 0; // Zmienna D z wartością 0

    // Tablica łańcuchów znaków do wyświetlania wyników jako "False" lub "True"
    std::string TorF[] = { "False", "True" };

    // Operator relacyjny `==` sprawdza równość
    std::cout << "A == C: " << TorF[A == C];
    std::cout << "\n(B == D): " << TorF[B == D];
    // Operator relacyjny `>` sprawdza, czy B jest większe od D
    std::cout << "\n(B > D): " << TorF[B > D];

    // Operator logiczny `&&` (and) - zwraca true tylko, jeśli oba warunki są spełnione
    std::cout << "\n\n(A == C) && (B == D): " << TorF[(A == C) && (B == D)];
    std::cout << "\n(A == C) && (B > D): " << TorF[(A == C) && (B > D)];

    // Operator logiczny `||` (or) - zwraca true, jeśli przynajmniej jeden warunek jest spełniony
    std::cout << "\n\n(A == C) || (B == D): " << TorF[(A == C) || (B == D)];
    std::cout << "\n(A == C) || (B > D): " << TorF[(A == C) || (B > D)];

    // Operator logiczny `!` (not) - negacja warunku logicznego
    std::cout << "\n\nA < B: " << TorF[A < B];
    std::cout << "\n!(A < B): " << TorF[!(A < B)];

    // Sprawdzenie równości i negacja warunku
    std::cout << "\n\nA == C: " << TorF[A == C];
    std::cout << "\n!(A == C): " << TorF[!(A == C)];

    std::cout << std::endl;

    return 0;
}
