#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja użycia funkcji szablonowej `sumTwo` do sumowania dwóch
 * wartości.
 */
int main() {
  int a = 90;
  int b = 1;

  // Wywołanie funkcji `sumTwo` dla wartości całkowitych `a` i `b`
  std::cout << a << " + " << b << " = " << sumTwo(a, b);
  return 0;
}
