/**
 * Przykład użycia pętli `while` w C++
 *
 * Opis:
 * - Program demonstruje działanie pętli `while`.
 * - Pętla `while` wykonuje blok kodu, dopóki warunek jest spełniony
 * (prawdziwy).
 * - Gdy warunek staje się fałszywy, wykonywanie pętli zostaje przerwane.
 */

#include <iostream>

int main() {
  int entry = 0;     // Zmienna sterująca pętlami
  const int GOAL{5}; // Stała określająca cel (granica dla warunku pętli)

  // Pierwsza pętla `while` zwiększa wartość `entry` aż do osiągnięcia `GOAL`
  while (entry <= GOAL) {
    std::cout << "Incrementing entry = " << entry << "\n";
    entry++; // Inkrementacja zmiennej `entry`
  }

  // Druga pętla `while` zmniejsza wartość `entry` poniżej `GOAL`
  while (entry < GOAL) {
    std::cout << "Decrementing entry = " << entry << "\n";
    entry--; // Dekrementacja zmiennej `entry`
  }

  return 0;
}
