/**
 * Przykład przekazywania parametrów przez referencję w C++
 *
 * Opis:
 * - Funkcja `increment()` przyjmuje parametr `input` przekazywany przez
 * referencję.
 * - Przekazywanie przez referencję pozwala na modyfikowanie oryginalnej
 * wartości zmiennej `a` w `main()`.
 * - Dzięki użyciu `&` w deklaracji parametru zmiany dokonane w funkcji
 * `increment()` wpływają na zmienną przekazaną do niej.
 */

#include <iostream>

// Deklaracja funkcji `increment()`
// Funkcja przyjmuje parametr `input` przez referencję
void increment(int &input);

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
void increment(int &input) {
  input++; // Zwiększenie wartości zmiennej `input` o 1
  std::cout << "In the function call a = " << input
            << "\n"; // Wyświetlenie wartości zmiennej wewnątrz funkcji
}
