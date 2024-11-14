#pragma once

#include "Dog.cpp" // Import klasy `Dog`

/**
 * Funkcja `printRoster` wyświetla informacje o wszystkich psach w podanej
 * tablicy.
 *
 * @param roster - tablica obiektów klasy `Dog`
 * @param size - liczba elementów w tablicy
 */
void printRoster(Dog roster[], int size);

inline void printRoster(Dog roster[], int size) {
  for (int i{0}; i < size; ++i) {
    roster[i].printInfo(); // Wywołanie funkcji `printInfo()` dla każdego psa w
                           // tablicy
    std::cout << std::endl;
  }
}
