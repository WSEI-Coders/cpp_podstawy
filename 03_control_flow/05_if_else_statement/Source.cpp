/**
 * Przykład użycia instrukcji warunkowej `if - else if - else` w C++
 *
 * Opis:
 * - Program demonstruje użycie struktury warunkowej `if - else if - else` do
 * sprawdzenia, czy użytkownik zgadł poprawną wartość.
 * - Instrukcja `if` sprawdza pierwszy warunek logiczny.
 * - Jeśli warunek `if` nie jest spełniony, sprawdzany jest warunek `else if`.
 * - Jeśli żaden z warunków `if` ani `else if` nie jest spełniony, wykonywane są
 * instrukcje w bloku `else`.
 */

#include <iostream>

int main() {
  int TARGET = 33; // Docelowa wartość do odgadnięcia
  int guess; // Zmienna przechowująca zgadywaną wartość przez użytkownika

  // Pobieranie wartości od użytkownika
  std::cout << "Guess a number between 0 - 100\n";
  std::cin >> guess;

  // Wyświetlenie wartości zgadywanej przez użytkownika
  std::cout << "You guessed: " << guess << "\n";

  // Instrukcja warunkowa `if - else if - else`
  if (guess < TARGET) {
    // Wykonuje się, jeśli `guess` jest mniejsze niż `TARGET`
    std::cout << "Your guess is too low.\n";
  } else if (guess > TARGET) {
    // Wykonuje się, jeśli `guess` jest większe niż `TARGET`
    std::cout << "Your guess is too high.\n";
  } else {
    // Wykonuje się, jeśli `guess` jest równe `TARGET`
    std::cout << "Yay! You guessed correctly.\n";
  }

  return 0;
}
