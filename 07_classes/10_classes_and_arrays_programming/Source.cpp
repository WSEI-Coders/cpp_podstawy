#include "main.hpp"

int main() {
  const int SIZE{3}; // Liczba psów w tablicy

  // Tablica obiektów klasy `Dog`
  Dog roster[SIZE];

  // Ustawianie imion i numerów licencji
  roster[0].setName("Blue");
  roster[1].setName("King");
  roster[2].setName("Spot");
  roster[0].setLicenseNumber(1111);
  roster[1].setLicenseNumber(2222);
  roster[2].setLicenseNumber(3333);

  // Wywołanie funkcji `printRoster()`, aby wyświetlić informacje o psach
  printRoster(roster, SIZE);

  return 0;
}
