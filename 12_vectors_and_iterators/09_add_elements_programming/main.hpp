#pragma once

#include <iostream>
#include <vector>

// Funkcja do wypisywania zawartości wektora
void printVector(const std::vector<int> &vIn);

// Funkcja przypisująca wartość do wektora (modyfikuje oryginalny wektor przez
// referencję)
void assignFunction(std::vector<int> &vInts, int in);

// Funkcja dodająca element na końcu wektora (przez referencję)
void pushBackFunction(std::vector<int> &vInts, int in);

// Funkcja dodająca element do wektora za pomocą emplace w określonej pozycji
// (przez referencję)
void emplaceFunction(std::vector<int> &vInts, int loc, int in);

// Implementacje funkcji

inline void printVector(const std::vector<int> &vIn) {
  for (const auto &e : vIn)
    std::cout << e << " ";
  std::cout << std::endl;
}

inline void assignFunction(std::vector<int> &vInts, int in) {
  std::cout << "\nAssigning " << in << " and printing the vector\n";
  vInts.assign(
      1, in); // Przypisanie nowej wartości do wektora (zmienia jego zawartość)
  printVector(vInts);
}

inline void pushBackFunction(std::vector<int> &vInts, int in) {
  std::cout << "\nPushing back " << in << " and printing the vector\n";
  vInts.push_back(in); // Dodanie elementu na koniec
  printVector(vInts);
}

inline void emplaceFunction(std::vector<int> &vInts, int loc, int in) {
  if (loc < 0 || loc >= static_cast<int>(vInts.size())) {
    std::cout << "\nInvalid emplacement location\n";
    return;
  }
  auto it = vInts.begin();
  std::cout << "\nEmplacing " << in << " at position " << loc
            << " and printing the vector\n";
  vInts.emplace(it + loc, in); // Dodanie elementu w określonej pozycji
  printVector(vInts);
}
