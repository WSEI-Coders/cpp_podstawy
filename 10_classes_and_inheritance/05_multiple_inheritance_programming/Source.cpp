#include "main.hpp"

/**
 * Funkcja główna programu
 * - Tworzenie obiektu `Pet` dziedziczącego właściwości z klas `Patient` i
 * `Dog`.
 * - Ustawianie imienia, numeru identyfikacyjnego i rasy zwierzęcia.
 * - Wyświetlanie właściwości obiektu.
 */
int main() {
  Pet p1; // Tworzenie obiektu klasy `Pet`

  // Ustawienie imienia, numeru identyfikacyjnego i rasy
  p1.setName("Kali");
  p1.setIdNumber(44444);
  p1.setBreed("Aussie");

  // Wyświetlanie właściwości obiektu `Pet`
  cout << p1.getName() << " " << p1.getIdNumber() << " " << p1.getBreed();
  return 0;
}
