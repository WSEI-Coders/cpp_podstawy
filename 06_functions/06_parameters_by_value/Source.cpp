/**
 * Przykład przekazywania parametrów przez wartość w C++
 *
 * Opis:
 * - Funkcja `increment()` przyjmuje parametr `input` przekazywany przez
 * wartość.
 * - Zmiany wprowadzone na zmiennej `input` wewnątrz funkcji nie wpływają na
 * oryginalną zmienną `a` w funkcji `main()`.
 */

#include <iostream>

// Deklaracja funkcji `increment()`
// Funkcja zwiększa wartość zmiennej `input` o 1
void increment(int input);

int main() {
  int a = 34; // Zmienna `a` inicjalizowana wartością 34
  std::cout << "Before the function call a = " << a
            << "\n"; // Wyświetlenie wartości przed wywołaniem funkcji
  increment(a);      // Wywołanie funkcji `increment()`
  std::cout << "After the function call a = " << a
            << "\n"; // Wyświetlenie wartości po wywołaniu funkcji
  return 0;
}

// Definicja funkcji `increment()`
void increment(int input) {
  input++; // Zwiększenie wartości zmiennej `input` o 1
  std::cout << "In the function call a = " << input
            << "\n"; // Wyświetlenie wartości zmiennej wewnątrz funkcji
}
