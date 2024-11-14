/*
 * Przekazywanie tablic do funkcji w C++
 *
 * C++ nie pozwala bezpośrednio na przekazywanie tablic jako argumentów do
 * funkcji, ale pozwala na przekazywanie wskaźników do tablic. Istnieją trzy
 * metody przekazywania tablic do funkcji:
 *  - Jako wskaźnik (`void functionName(variableType *arrayName)`)
 *  - Jako tablica o określonym rozmiarze (`void functionName(variableType
 * arrayName[length])`)
 *  - Jako tablica bez określonego rozmiaru (`void functionName(variableType
 * arrayName[])`)
 */

#include <iomanip>
#include <iostream>

// Przekazywanie tablicy jako wskaźnika
void arrayAsPointer(int *array, int size);

// Przekazywanie tablicy jako tablicy o określonym rozmiarze
void arraySized(int array[3], int size);

// Przekazywanie tablicy jako tablicy bez określonego rozmiaru
void arrayUnSized(int array[], int size);

int main() {
  const int size = 3;             // Stała określająca rozmiar tablicy
  int array[size] = {33, 66, 99}; // Tablica o rozmiarze 3

  // Przekazywanie tablicy do funkcji jako wskaźnika, tablicy o rozmiarze i
  // tablicy bez określonego rozmiaru Uwaga: przekazywana jest referencja do
  // tablicy, dlatego należy podać także jej rozmiar
  arrayAsPointer(array, size); // Przekazywanie jako wskaźnik
  arraySized(array, size); // Przekazywanie jako tablica o określonym rozmiarze
  arrayUnSized(array, size); // Przekazywanie jako tablica bez określonego rozmiaru
  return 0;
}

// Funkcja przyjmująca tablicę jako wskaźnik
void arrayAsPointer(int *array, int size) {
  std::cout << "Array passed as a pointer: ";
  for (int i = 0; i < size; i++)
    std::cout << std::setw(5) << array[i] << " "; // Wydruk elementów tablicy
  std::cout << "\n";
}

// Funkcja przyjmująca tablicę o określonym rozmiarze
void arraySized(int array[3], int size) {
  std::cout << "Array passed as a sized array: ";
  for (int i = 0; i < size; i++)
    std::cout << std::setw(5) << array[i] << " "; // Wydruk elementów tablicy
  std::cout << "\n";
}

// Funkcja przyjmująca tablicę bez określonego rozmiaru
void arrayUnSized(int array[], int size) {
  std::cout << "Array passed as an unsized array: ";
  for (int i = 0; i < size; i++)
    std::cout << std::setw(5) << array[i] << " "; // Wydruk elementów tablicy
  std::cout << "\n";
}
