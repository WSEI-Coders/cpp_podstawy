/**
 * Program gry zgadywania liczby w C++
 *
 * Opis:
 * - Program prosi użytkownika o zgadnięcie liczby między 0 a 100.
 * - Użytkownik ma możliwość zakończenia gry, wprowadzając `-1`.
 * - Program wykorzystuje pętlę nieskończoną `while(true)` z kontrolą warunków,
 * aby zarządzać logiką gry.
 */

#include <iostream>
#include <sstream> // Włączona dla ewentualnych dodatkowych operacji na ciągach znaków

int main() {
  int target = 55; // Liczba docelowa, którą użytkownik ma zgadnąć
  int guess = -1; // Zmienna przechowująca wartość wprowadzoną przez użytkownika

  // Pętla nieskończona `while(true)`, działająca aż do przerwania za pomocą
  // `break`
  while (true) {
    // Zapytanie użytkownika o wprowadzenie liczby
    std::cout << "Guess a number between 0 and 100 (enter -1 to finish): ";
    std::cin >> guess;
    std::cout << guess << "\n";

    // Sprawdzenie, czy użytkownik chce zakończyć grę
    if (guess == -1) {
      std::cout << "You have quit the game :(\n";
      break; // Przerwanie działania pętli
    }

    // Sprawdzenie, czy zgadywana liczba jest większa niż liczba docelowa
    if (guess > target)
      std::cout << "The guess is too high\n";
    // Sprawdzenie, czy zgadywana liczba jest mniejsza niż liczba docelowa
    else if (guess < target)
      std::cout << "The guess is too low\n";
    // Sprawdzenie, czy użytkownik odgadł poprawną liczbę
    else if (guess == target) {
      std::cout << "You guessed the correct answer!\n";
      break; // Przerwanie działania pętli po poprawnym odgadnięciu
    } else {
      // Obsługa nieznanych wartości (ta część kodu jest w zasadzie niepotrzebna
      // w tym kontekście)
      std::cout << "Unknown command!\n";
    }
  }

  return 0;
}
