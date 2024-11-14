/**
 * Program wyboru pakietu wakacyjnego z wykorzystaniem instrukcji `switch`
 *
 * Opis:
 * - Program pozwala użytkownikowi na wybór spośród trzech pakietów wakacyjnych:
 * `L` (luxury), `S` (standard) i `B` (basic).
 * - Wybór użytkownika jest traktowany bez względu na wielkość liter dzięki
 * funkcji `toupper`.
 * - Instrukcja `switch` obsługuje różne opcje i wyświetla odpowiednie szczegóły
 * pakietu.
 */

#include <cctype> // Używane do funkcji toupper()
#include <iostream>

int main() {
  char menuItem; // Zmienna przechowująca wybór użytkownika

  // Wyświetlenie menu
  std::cout << "Choose your holiday package:\n";
  std::cout << "L: luxury package\nS: standard package\n";
  std::cout << "B: basic package\n";

  // Pobranie wyboru od użytkownika
  std::cin >> menuItem;
  menuItem = toupper(menuItem); // Konwersja do wielkiej litery
  std::cout << menuItem << "\n";
  std::cout << "The " << menuItem << " package includes:\n";

  // Obsługa wyboru za pomocą instrukcji `switch`
  switch (menuItem) {
  case 'L':
    std::cout << "\tSpa Day\n";
    std::cout << "\tSailboat Tour\n";
    break; // Dodanie `break` do zakończenia bloku

  case 'S':
    std::cout << "\tCity Tour\n";
    std::cout << "\tComplimentary Happy Hour\n";
    break; // Dodanie `break` do zakończenia bloku

  case 'B':
    std::cout << "\tAirport Transfers\n";
    std::cout << "\tComplimentary Breakfast\n";
    break;

  default:
    std::cout << "Please select the L, S, or B package.\n";
  }

  return 0;
}
