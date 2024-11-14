#include "main.h"

int main()
{
    int m1 = 4; // Pierwszy mnożnik
    int m2 = 5; // Drugi mnożnik
    int product = m1 * m2; // Obliczenie iloczynu

    // Wywołanie funkcji `printProduct()` z przekazaniem zmiennych
    printProduct(m1, m2, product);
    std::cout << std::endl;
    return 0;
}
