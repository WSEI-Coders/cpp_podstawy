#include "main.hpp"

/**
 * Funkcja główna programu
 * - Tworzy obiekt `Compare` do znajdowania najmniejszych wartości.
 * - Demonstracja znajdowania najmniejszej wartości dla różnych zestawów danych
 * (2 liczby, 3 liczby, tablice).
 */
int main() {
  Compare c; // Utworzenie obiektu `Compare`

  // Przykładowe dane do porównań
  int a = 5;
  int b = 4;
  int d = 6;
  float f1 = 5.43;
  float f2 = 6.32;
  float f3 = 99.43;
  char c1 = 'c';
  char c2 = 'z';
  char c3 = 'm';
  int arrayInt[5] = {65, 43, 2, 898, 678};
  float arrayInF[4] = {4.5, 4.9, 4.3, 6.5};
  char arrayInC[6] = {'w', 'z', 't', 'h', 'e', 'c'};

  // Porównania dla dwóch wartości
  std::cout << c.findSmaller(a, b) << " is the smaller of " << a << " and " << b
            << "\n";
  std::cout << c.findSmaller(f1, f2) << " is the smaller of " << f1 << " and "
            << f2 << "\n";
  std::cout << c.findSmaller(c1, c2) << " is the smaller of " << c1 << " and "
            << c2 << "\n\n";

  // Porównania dla trzech wartości
  std::cout << c.findSmaller(a, b, d) << " is the smallest of " << a << ", "
            << b << ", " << d << "\n";
  std::cout << c.findSmaller(f1, f2, f3) << " is the smallest of " << f1 << ", "
            << f2 << ", " << f3 << "\n";
  std::cout << c.findSmaller(c1, c2, c3) << " is the smallest of " << c1 << ", "
            << c2 << ", " << c3 << "\n\n";

  // Porównania dla tablic
  std::cout << c.findSmaller(arrayInt, 5)
            << " is the smallest of the input array\n";
  std::cout << c.findSmaller(arrayInF, 4)
            << " is the smallest of the input array\n";
  std::cout << c.findSmaller(arrayInC, 6)
            << " is the smallest of the input array\n";

  return 0;
}
