#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja tworzenia obiektów `Shape`.
 * - Wyświetlanie powierzchni i użycie przeciążonego operatora `+` do sumowania
 * wymiarów prostokątów.
 */
int main(void) {
  Shape sh1(4, 4); // Tworzenie obiektu `Shape` z długością 4 i szerokością 4
  Shape sh2(2, 6); // Tworzenie obiektu `Shape` z długością 2 i szerokością 6
  Shape sh3;       // Tworzenie obiektu `Shape` z domyślnymi wartościami

  // Użycie przeciążonego operatora `+` do sumowania wymiarów `sh1` i `sh2` i
  // obliczenia powierzchni wynikowej
  int total = sh1 + sh2;

  // Wyświetlanie powierzchni i sumarycznej powierzchni
  std::cout << "\nsh1.Area() = " << sh1.Area();
  std::cout << "\nsh2.Area() = " << sh2.Area();
  std::cout << "\nTotal area of combined dimensions = " << total;
  return 0;
}
