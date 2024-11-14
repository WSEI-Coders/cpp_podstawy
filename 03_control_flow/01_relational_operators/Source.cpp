/**
 * Przykład użycia operatorów relacyjnych w C++
 * 
 * Opis:
 * - Program demonstruje działanie operatorów relacyjnych (`==`, `!=`, `<`, `>`, `<=`, `>=`).
 * - Operator relacyjny porównuje dwie wartości i zwraca `true` lub `false`, w zależności od wyniku porównania.
 * - `TorF` to tablica łańcuchów znaków, która pozwala na czytelne wyświetlanie wyników (`True` lub `False`) w oparciu o wartość logiczną zwracaną przez porównanie.
 */

#include <iostream>
#include <string>

int main()
{
    // Tablica łańcuchów znaków do wyświetlania wyników jako "False" lub "True"
    std::string TorF[] = {"False", "True"};

    int a = 100; // Zmienna a o wartości 100
    int b = 33;  // Zmienna b o wartości 33
    int c = 33;  // Zmienna c o wartości 33

    // Przykłady użycia operatorów relacyjnych
    std::cout << "a < b is " << TorF[a < b]; // Sprawdzenie, czy a jest mniejsze od b
    std::cout << "\na > b is " << TorF[a > b]; // Sprawdzenie, czy a jest większe od b
    std::cout << "\na != b is " << TorF[a != b]; // Sprawdzenie, czy a jest różne od b
    std::cout << "\nc >= b is " << TorF[c >= b]; // Sprawdzenie, czy c jest większe lub równe b
    std::cout << "\nc <= b is " << TorF[c <= b]; // Sprawdzenie, czy c jest mniejsze lub równe b

    return 0;
}
