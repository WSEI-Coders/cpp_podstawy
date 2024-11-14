#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja tworzenia obiektów `Dog` z różnymi konstruktorami.
 * - Wyświetlanie imienia i numeru licencji dla każdego psa.
 */
int main() {
  // Tworzenie obiektów `Dog` za pomocą różnych konstruktorów
  Dog d1;                 // Konstruktor domyślny
  Dog d2("Kali");         // Konstruktor ustawiający tylko imię
  Dog d3(12345);          // Konstruktor ustawiający tylko numer licencji
  Dog d4("Sammy", 65432); // Konstruktor ustawiający imię i numer licencji

  // Wyświetlanie imienia i numeru licencji dla każdego psa
  std::cout << d1.getName() << " " << d1.getLicense() << "\n";
  std::cout << d2.getName() << " " << d2.getLicense() << "\n";
  std::cout << d3.getName() << " " << d3.getLicense() << "\n";
  std::cout << d4.getName() << " " << d4.getLicense() << "\n";

  return 0;
}
