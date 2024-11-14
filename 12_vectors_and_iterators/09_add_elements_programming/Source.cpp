#include "main.hpp"

int main() {
  std::vector<int> vInts;
  vInts.assign(10, 5); // Przypisanie 10 wartości 5 do wektora
  printVector(vInts);

  assignFunction(vInts, 1);     // Funkcja przypisująca wartość
  pushBackFunction(vInts, 2);   // Funkcja dodająca element na końcu
  emplaceFunction(vInts, 1, 3); // Funkcja dodająca element w pozycji 1

  return 0;
}
