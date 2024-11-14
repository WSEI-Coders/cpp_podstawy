#include "main.h"

/**
 * Funkcja główna programu
 * - Tworzy obiekt `Patient` z podanym imieniem.
 * - Wyświetla imię pacjenta.
 */
int main() {
  // Tworzenie obiektu `Patient` z imieniem "Tammy Smith"
  Patient p1("Tammy Smith");

  // Wyświetlenie imienia pacjenta
  std::cout << p1.getName() << std::endl;

  return 0;
}
