#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja użycia dziedziczenia między klasami `Student` i `GradStudent`.
 * - Tworzenie obiektu klasy `GradStudent`, ustawianie jego identyfikatora i
 * stopnia naukowego oraz ich wyświetlanie.
 */
int main() {
  GradStudent gs1; // Tworzenie obiektu klasy `GradStudent`

  // Ustawienie identyfikatora i stopnia naukowego
  gs1.setId(123456789);
  gs1.setDegree("BSEE");

  // Wyświetlanie identyfikatora i stopnia naukowego
  std::cout << gs1.getId() << " " << gs1.getDegree();
  return 0;
}
