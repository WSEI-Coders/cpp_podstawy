/**
 * Przykład użycia wskaźników w C++
 * 
 * Opis:
 * - Program demonstruje podstawowe pojęcia związane ze wskaźnikami.
 * - Wskaźnik to zmienna, która przechowuje adres pamięci innej zmiennej.
 * - Użycie operatora dereferencji `*` pozwala na dostęp do wartości przechowywanej pod adresem, na który wskazuje wskaźnik.
 */

#include <iostream>

int main()
{
    int a = 54; // Zmienna całkowita `a` o wartości 54

    // Deklaracja wskaźnika `pointerToA`, który przechowuje adres zmiennej `a`
    int* pointerToA = &a;

    // Wyświetlenie adresu przechowywanego przez wskaźnik `pointerToA`
    // Wskaźnik `pointerToA` przechowuje adres zmiennej `a`
    std::cout << "pointerToA stores the address: " << pointerToA << '\n';

    // Operator dereferencji `*` pozwala uzyskać wartość, na którą wskazuje wskaźnik `pointerToA`
    // Wartość ta to wartość zmiennej `a`
    std::cout << "pointerToA points to the value: " << *pointerToA << '\n';

    return 0;
}
