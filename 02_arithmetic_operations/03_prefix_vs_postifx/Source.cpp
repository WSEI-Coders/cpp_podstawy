/**
 * Przykład różnicy między inkrementacją postfiksową (a++) a prefiksową (++a)
 * 
 * Opis:
 * - Program demonstruje różnicę między operatorami inkrementacji w wersjach postfiksowej i prefiksowej.
 * - `post = a++`: wartość `a` jest przypisywana do `post`, a następnie `a` jest zwiększana.
 * - `pre = ++b`: wartość `b` jest najpierw zwiększana, a następnie przypisywana do `pre`.
 */

#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0; // Zmienne a i b są inicjalizowane wartościami początkowymi
    int post = 0, pre = 0; // Zmienne przechowujące wartości wynikowe

    // Wyświetlenie początkowych wartości
    cout << "\tpost = " << post << " pre = " << pre << "\n";

    // Postfiksowa inkrementacja (a++) oraz prefiksowa inkrementacja (++b)
    post = a++; // Wartość a jest przypisana do post, a dopiero potem a jest zwiększane
    pre = ++b;  // b jest najpierw zwiększane, a następnie przypisywane do pre

    // Wyświetlenie wartości po pierwszej operacji inkrementacji
    cout << "\tpost = " << post << " pre = " << pre << "\n";

    // Druga operacja inkrementacji
    post = a++; // a jest przypisane do post, a potem zwiększane
    pre = ++b;  // b jest zwiększane, a następnie przypisywane do pre

    // Wyświetlenie wartości po drugiej operacji inkrementacji
    cout << "\tpost = " << post << " pre = " << pre << "\n";

    return 0;
}
