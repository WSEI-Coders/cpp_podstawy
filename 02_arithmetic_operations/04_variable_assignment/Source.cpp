/**
 * Przykład operatorów przypisania złożonego w C++
 * 
 * Opis:
 * - Program demonstruje użycie operatorów przypisania złożonego (`+=`, `-=`, `*=`, `/=`, `%=`).
 * - Operator przypisania złożonego wykonuje operację arytmetyczną na zmiennej i przypisuje wynik do tej samej zmiennej.
 * - Przykłady:
 *   - `a += b` jest równoważne `a = a + b`.
 *   - `a -= b` jest równoważne `a = a - b`.
 *   - `a *= b` jest równoważne `a = a * b`.
 *   - `a /= b` jest równoważne `a = a / b`.
 *   - `a %= b` jest równoważne `a = a % b` (modulo).
 */

#include <iostream>

int main()
{
    int a = 0; // Zmienna do której będą stosowane operatory przypisania złożone
    std::cout << "\t\t\tOperacja\t Wynik\n";
    std::cout << "a = " << a;

    // Przykład użycia operatora +=
    a += 2; // Dodaje 2 do a i przypisuje wynik
    std::cout << "\t\t\ta += 2 \t\t a = " << a << "\n";
    std::cout << "a = " << a << " : ";

    // Przykład użycia operatora -=
    a -= 4; // Odejmuje 4 od a i przypisuje wynik
    std::cout << "\t\ta -= 4 \t\t a = " << a << "\n";

    int b = 3; // Nowa zmienna b
    std::cout << "a = " << a << ", b = " << b << " : ";

    // Przykład użycia operatora *=
    a *= b; // Mnoży a przez b i przypisuje wynik
    std::cout << "\ta *= b \t\t a = " << a << "\n";
    std::cout << "a = " << a << ", b = " << b << " : ";

    // Przykład użycia operatora /=
    a /= b; // Dzieli a przez b i przypisuje wynik
    std::cout << "\ta /= b \t\t a = " << a << "\n";

    return 0;
}
