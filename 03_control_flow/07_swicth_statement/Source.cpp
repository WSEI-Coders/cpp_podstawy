/**
 * Przykład użycia instrukcji `switch` w C++
 *
 * Opis:
 * - Program demonstruje wykorzystanie instrukcji `switch` do obsługi wyboru
 * użytkownika w menu.
 * - Każdy przypadek (`case`) określa działanie dla określonej wartości.
 * - `default` jest używany do obsługi niepoprawnych danych wejściowych.
 * - Drugi `switch` wykorzystuje wybór użytkownika, aby przedstawić fragmenty
 * opowieści w zależności od wyboru początku, środka lub końca.
 */

#include <cctype> // Używane do funkcji toupper()
#include <iostream>

int main() {
  int menuItem; // Zmienna przechowująca wybór użytkownika w menu

  // Wyświetlenie menu
  std::cout << "What is your favorite winter sport?: \n";
  std::cout << "1. Skiing\n2. Sledding\n3. Sitting by the fire";
  std::cout << "\n4. Drinking hot chocolate\n";
  std::cout << "\n\n";
  std::cout << "Enter your choice: ";
  std::cin >> menuItem;

  // Obsługa wyboru użytkownika za pomocą instrukcji `switch`
  switch (menuItem) {
  case 1:
    std::cout << "Skiing?! Sounds dangerous!\n";
    break;
  case 2:
    std::cout << "Sledding?! Sounds like work!\n";
    break;
  case 3:
    std::cout << "Sitting by the fire?! Sounds warm!\n";
    break;
  case 4:
    std::cout << "Hot chocolate?! Yum!\n";
    break;
  default:
    std::cout << "Enter a valid menu item";
    break;
  }

  char begin; // Zmienna przechowująca wybór użytkownika do opowieści
  std::cout << "\n\nWhere do you want to begin?\n";
  std::cout << "B. At the beginning?\nM. At the middle?";
  std::cout << "\nE. At the end?\n\n";
  std::cout << "Enter your choice: ";
  std::cin >> begin;
  begin = toupper(begin); // Konwersja wyboru użytkownika do wielkiej litery

  // Obsługa wyboru użytkownika za pomocą drugiej instrukcji `switch`
  switch (begin) {
  case 'B':
    std::cout << "Once upon a time there was a wolf.\n";
    break;
  case 'M':
    std::cout << "The wolf hurt his leg.\n";
    break;
  case 'E':
    std::cout << "The wolf lived happily ever after\n";
    break;
  default:
    std::cout << "Please enter B, M, or E.\n";
    break;
  }

  return 0;
}
