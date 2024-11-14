/**
 * Program do obliczania sumy i średniej z wprowadzonych liczb
 *
 * Opis:
 * - Program pobiera pięć liczb od użytkownika, oblicza ich sumę oraz średnią.
 * - Używana jest pętla `for` do wielokrotnego pobierania danych i sumowania
 * wartości.
 * - Średnia jest obliczana jako wynik dzielenia sumy przez liczbę elementów, z
 * użyciem rzutowania na `float` dla dokładności.
 */

#include <iostream>

int main() {
  int sum{0};           // Zmienna przechowująca sumę wprowadzonych liczb
  const int NUMBERS{5}; // Stała określająca liczbę liczb do wprowadzenia

  // Pętla `for` do pobierania liczb od użytkownika
  for (int i{0}; i < NUMBERS; ++i) {
    int num; // Zmienna do przechowywania aktualnej liczby
    std::cout << "Enter " << i + 1 << " number: ";
    std::cin >> num;
    sum += num; // Dodanie liczby do sumy
  }

  // Wyświetlenie sumy i obliczenie średniej
  std::cout << "sum: " << sum
            << ", average: " << (sum / static_cast<float>(NUMBERS))
            << std::endl;

  return 0;
}
