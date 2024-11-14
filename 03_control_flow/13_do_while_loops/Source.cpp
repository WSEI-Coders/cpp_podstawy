/**
 * Przykład użycia pętli `do...while` w C++
 *
 * Opis:
 * - Pętla `do...while` wykonuje zawarte w niej instrukcje co najmniej raz,
 * zanim sprawdzi warunek.
 * - W przeciwieństwie do pętli `while`, warunek w `do...while` jest sprawdzany
 * po pierwszej iteracji.
 * - Jeśli warunek jest prawdziwy (`true`), pętla wykonuje kolejne iteracje.
 */

#include <iostream>

int main() {
  int count = 0;     // Zmienna sterująca pierwszą pętlą
  const int GOAL{5}; // Stała określająca cel (granica dla warunku pętli)

  // Pętla `do...while` zawsze wykonuje instrukcje przynajmniej raz
  do {
    std::cout << "Count = " << count << "\n";
    count++; // Inkrementacja zmiennej `count`
  } while (count < GOAL);

  int otherCount = 6; // Zmienna sterująca drugą pętlą

  // Druga pętla `do...while` - wykona się tylko raz, ponieważ warunek jest
  // fałszywy po pierwszej iteracji
  do {
    std::cout << "othercount = " << otherCount << "\n";
    otherCount++;
  } while (otherCount < GOAL);

  return 0;
}
