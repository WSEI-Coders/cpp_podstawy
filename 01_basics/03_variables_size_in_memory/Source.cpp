#include <iostream>  // Włączenie biblioteki, która umożliwia korzystanie ze standardowego wejścia/wyjścia, np. cout.

using namespace std;  // Użycie 'namespace std' pozwala zrezygnować z prefiksu 'std::' przed elementami biblioteki standardowej.

int main() {
    // Funkcja main() jest punktem wejścia do programu w C++. Program zaczyna wykonanie od tego miejsca.

    // Wydrukowanie rozmiarów różnych typów zmiennych dostępnych w C++.
    // sizeof(typ) - zwraca liczbę bajtów, jaką zajmuje dany typ zmiennej w pamięci.
    cout << "int size = " << sizeof(int) << " bajtów" << endl;
    cout << "short size = " << sizeof(short) << " bajtów" << endl;
    cout << "long size = " << sizeof(long) << " bajtów" << endl;
    cout << "char size = " << sizeof(char) << " bajtów" << endl;
    cout << "float size = " << sizeof(float) << " bajtów" << endl;
    cout << "double size = " << sizeof(double) << " bajtów" << endl;
    cout << "bool size = " << sizeof(bool) << " bajtów" << endl;

    return 0;  // Funkcja main() zwraca 0, co oznacza, że program zakończył się pomyślnie.
}
