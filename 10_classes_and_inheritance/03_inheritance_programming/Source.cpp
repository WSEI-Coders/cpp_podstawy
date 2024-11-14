#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja użycia dziedziczenia między klasami `Flower` i `Rose`.
 * - Tworzenie obiektu klasy `Rose`, ustawianie jego właściwości i ich
 * wyświetlanie.
 */
int main() {
  Rose r1; // Tworzenie obiektu klasy `Rose`

  // Ustawienie czasu kwitnienia i zapachu róży
  r1.setBloomTime("spring");
  r1.setFragrance("strong");

  // Wyświetlanie właściwości róży
  std::cout << "r1 blooms in " << r1.getBloomTime() << ", "
            << r1.getFragrance();
  return 0;
}
