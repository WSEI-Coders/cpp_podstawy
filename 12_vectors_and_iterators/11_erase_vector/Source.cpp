#include <iostream>
#include <vector>

int main() {
  std::vector<int> vectorInts = {0, 1, 2, 3, 4,
                                 5, 6, 7}; // Inicjalizacja wektora wartościami

  std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

  std::cout << "VectorInts has these elements:\n";
  for (const auto &elem :
       vectorInts) // Użycie pętli zakresowej dla bezpieczeństwa
  {
    std::cout << elem << " ";
  }

  // Usuwanie elementu na pozycji 4
  vectorInts.erase(vectorInts.begin() + 4);
  std::cout << "\nAfter erase, the vector has these elements:\n";
  for (const auto &elem : vectorInts) {
    std::cout << elem << " ";
  }

  // Usuwanie elementów od pozycji 1 do pozycji 3 (zakres: [1, 3))
  vectorInts.erase(vectorInts.begin() + 1, vectorInts.begin() + 3);
  std::cout << "\nAfter erase, the vector has these elements:\n";
  for (const auto &elem : vectorInts) {
    std::cout << elem << " ";
  }

  return 0;
}
