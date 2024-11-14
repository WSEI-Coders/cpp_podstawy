/**
 * Program do wyszukiwania wartości w tablicy
 *
 * Opis:
 * - Program pozwala użytkownikowi na wprowadzenie wartości do wyszukania w
 * tablicy liczb całkowitych.
 * - Jeśli wartość zostanie znaleziona, program zwraca jej pozycję (indeks) w
 * tablicy.
 * - Użytkownik może zakończyć działanie programu, wpisując `-1`.
 * - Alternatywnie, program może używać funkcji `std::find` do wyszukiwania
 * wartości w tablicy.
 */

#include <algorithm> // Biblioteka dla funkcji `std::find`
#include <iostream>

int main() {
  // Tablica liczb całkowitych do przeszukiwania
  int searchArray[10] = {324, 4567, 6789, 5421345, 7, 65, 8965, 12, 342, 485};
  int searchKey, location{-1}; // `searchKey` to szukana wartość, `location`
                               // przechowuje znaleziony indeks

  // Pętla do wielokrotnego pobierania wartości od użytkownika
  while (true) {
    // Pobranie wartości do wyszukania
    std::cout << "Enter value to find in an array (type -1 to quit): ";
    std::cin >> searchKey;
    if (searchKey == -1) // Sprawdzenie, czy użytkownik chce zakończyć program
      break;

    // Wyszukiwanie wartości w tablicy za pomocą pętli `for`
    for (int i{0}; i < std::size(searchArray); ++i) {
      if (searchArray[i] == searchKey) // Porównanie wartości
      {
        location = i; // Zapisanie indeksu znalezionej wartości
        break;        // Przerwanie pętli po znalezieniu wartości
      }
    }

    //// Alternatywne wyszukiwanie za pomocą `std::find`
    //// https://en.cppreference.com/w/cpp/algorithm/find
    // auto it = std::find(std::begin(searchArray), std::end(searchArray),
    // searchKey); if (it != std::end(searchArray))
    //     location = (it - std::begin(searchArray));

    // Informacja zwrotna dla użytkownika
    if (location != -1) {
      std::cout << searchKey << " is at location " << location
                << " in the array.\n";
    } else {
      std::cout << searchKey << " is not in the array.\n";
    }

    // Resetowanie wartości `location` przed kolejnym wyszukiwaniem
    location = -1;
  }

  return 0;
}
