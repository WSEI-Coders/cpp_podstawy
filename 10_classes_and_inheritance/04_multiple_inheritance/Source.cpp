#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja dziedziczenia wielokrotnego w klasie `TA`.
 * - Tworzenie obiektu `TA`, ustawianie jego właściwości i ich wyświetlanie.
 */
int main() {
  TA t1; // Tworzenie obiektu klasy `TA`

  // Ustawienie właściwości obiektu `TA`
  t1.setSupervisor("Dr. Caohuu");
  t1.setId(55555);
  t1.setTitle("Adjunct Prof.");

  // Wyświetlanie właściwości obiektu
  std::cout << t1.getSupervisor() << " " << t1.getId() << " " << t1.getTitle();
  return 0;
}
