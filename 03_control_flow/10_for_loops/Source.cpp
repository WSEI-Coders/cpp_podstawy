/**
 * Przykład użycia pętli `for` w C++
 *
 * Opis:
 * - Program demonstruje prostą pętlę `for`, która wykonuje 10 iteracji.
 * - W każdej iteracji wartość zmiennej `i` jest wyświetlana, począwszy od `0`
 * do `9`.
 * - Pętla `for` jest używana do wielokrotnego wykonywania bloku kodu z kontrolą
 * liczby iteracji.
 */

#include <iostream>

int main() {
  // Pętla `for` iterująca od 0 do 9
  for (int i = 0; i < 10; i++) {
    // Wyświetlenie wartości `i` w każdej iteracji
    std::cout << "i = " << i << "\n";
  }

  return 0;
}
