#include "main.hpp"

/**
 * Funkcja główna programu
 * - Tworzy obiekt `Compare` do porównywania wartości.
 * - Demonstracja porównywania wartości typu `int`, `float` i `char`.
 */
int main() {
  Compare c; // Utworzenie obiektu `Compare`

  int a = 5;
  int b = 4;
  float f1 = 5.43;
  float f2 = 6.32;
  char c1 = 'c';
  char c2 = 'z';

  // Wywołanie metod `findSmaller` dla różnych typów danych
  std::cout << c.findSmaller(a, b) << " is the smaller of " << a << " and " << b
            << "\n";
  std::cout << c.findSmaller(f1, f2) << " is the smaller of " << f1 << " and "
            << f2 << "\n";
  std::cout << c.findSmaller(c1, c2) << " is the smaller of " << c1 << " and "
            << c2 << "\n";

  return 0;
}
