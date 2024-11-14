#include "Shape.h"
#include <iostream>

/**
 * Funkcja główna programu demonstruje tworzenie obiektów `Shape` oraz
 * porównywanie ich powierzchni przy użyciu różnych metod porównujących.
 */
int main() {
  // Tworzenie dwóch obiektów `Shape`
  Shape s1{4, 6}; // Prostokąt o długości 4 i szerokości 6
  Shape s2{2, 6}; // Prostokąt o długości 2 i szerokości 6

  // Porównanie powierzchni `s1` i `s2` przy użyciu funkcji `compareWithThis()`
  if (s1.compareWithThis(s2))
    std::cout << "Shape1 is larger than Shape2\n";
  else
    std::cout << "Shape1 is smaller than Shape2\n";

  // Porównanie powierzchni `s1` i `s2` przy użyciu funkcji `compare()`
  if (s1.compare(s2))
    std::cout << "Shape1 is larger than Shape2\n";
  else
    std::cout << "Shape1 is smaller than Shape2\n";

  return 0;
}
