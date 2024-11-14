/**
 * Przykład działania operatorów logicznych w wyrażeniach logicznych
 * 
 * Opis:
 * - Program demonstruje różne kombinacje wartości logicznych zmiennych `A`, `B` i `C` oraz ich wpływ na wynik logicznego wyrażenia `Q`.
 * - Używane są operatory `and`, `or` i `not`, które są odpowiednikami `&&`, `||` oraz `!` w C++.
 * - Program wyświetla tabelę wartości logicznych dla różnych kombinacji `A`, `B` i `C`.
 */

#include <iostream>

int main()
{
    // Zmienne logiczne
    bool Q;
    bool A{ false };
    bool B{ false };
    bool C{ false };

    // Wyświetlanie nagłówka tabeli wyników
    std::cout << std::boolalpha << std::endl; // Wyświetlanie wartości logicznych jako "true" lub "false"
    std::cout << "A\tB\tC\t(A && B && C)\t\t(!B || !C)\t\t(A && (!B || !C))\t\tQ\n";

    // Wszystkie wartości false
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
              << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // C true
    C = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
              << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // B true
    C = false;
    B = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
              << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // A true
    B = false;
    A = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
              << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // C and B true
    C = true;
    B = true;
    A = false;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
              << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // C and A true
    C = true;
    B = false;
    A = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
              << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // B and A true
    C = false;
    B = true;
    A = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
              << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // Wszystkie wartości true
    C = true;
    B = true;
    A = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
              << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    return 0;
}
