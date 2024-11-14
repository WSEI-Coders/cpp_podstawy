/**
 * Przykład funkcji przeszukującej tablicę w C++
 *
 * Opis:
 * - Program zawiera funkcję `search()`, która przeszukuje tablicę w celu
 * znalezienia podanego klucza (`key`).
 * - Jeśli klucz zostanie znaleziony, funkcja zwraca indeks, na którym występuje
 * klucz.
 * - Jeśli klucz nie zostanie znaleziony, funkcja zwraca `-1`.
 */

#include <iostream>

// Deklaracja funkcji `search()`, która przeszukuje tablicę w celu znalezienia
// klucza
int search(int arr[], int size, int key);

int main() {
  const int size = 4;                 // Rozmiar tablicy
  int array[] = {345, 75896, 2, 543}; // Tablica liczb całkowitych
  int searchKey = 543;                // Klucz do wyszukania w tablicy

  // Wywołanie funkcji `search()` i wyświetlenie wyniku
  // Funkcja zwróci indeks, na którym znajduje się `searchKey`, lub `-1` jeśli
  // klucz nie zostanie znaleziony
  std::cout << "Found at: " << search(array, size, searchKey) << std::endl;

  return 0;
}

// Definicja funkcji `search()`
// Funkcja przeszukuje tablicę `arr` o rozmiarze `size` w poszukiwaniu wartości
// `key`
int search(int arr[], int size, int key) {
  // Pętla iterująca przez elementy tablicy
  for (int i{0}; i < size; ++i) {
    // Sprawdzenie, czy bieżący element jest równy kluczowi
    if (arr[i] == key)
      return i; // Zwrócenie indeksu, jeśli klucz został znaleziony
  }
  return -1; // Zwrócenie `-1`, jeśli klucz nie został znaleziony w tablicy
}
