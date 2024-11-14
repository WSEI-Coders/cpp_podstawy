#pragma once

#include <iostream>
#include <vector>

// Funkcja do wypisywania elementów wektora z wykorzystaniem iteratora
void printVector(const std::vector<float> &vIn) {
  // Wersja z użyciem `auto` i pętli `range-based for`
  std::cout << "Zawartość wektora (za pomocą iteratora i pętli range-based):\n";
  for (const auto &value : vIn) {
    std::cout << value << std::endl;
  }
}
