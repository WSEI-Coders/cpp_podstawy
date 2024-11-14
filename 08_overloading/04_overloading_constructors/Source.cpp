#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja tworzenia obiektów `Square` z różnymi konstruktorami.
 * - Wyświetla wymiary prostokątów.
 */
int main() {
  // Utworzenie obiektu `Square` przy użyciu konstruktora domyślnego
  Square s1;

  // Utworzenie obiektu `Square` przy użyciu konstruktora z parametrami
  Square s2(4, 3);

  // Wyświetlenie wymiarów prostokątów
  cout << "s1 dimensions are: " << s1.getWidth() << ", " << s1.getLength();
  cout << "\ns2 dimensions are: " << s2.getWidth() << ", " << s2.getLength();

  return 0;
}
