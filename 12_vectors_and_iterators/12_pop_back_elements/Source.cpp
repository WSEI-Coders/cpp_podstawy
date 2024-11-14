#include <iostream>
#include <vector>

int main() {
  std::vector<int> vectorInts = {0, 1, 2, 3,
                                 4, 5, 6, 7}; // Inicjalizacja wartościami

  std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

  std::cout << "VectorInts has these elements:\n";
  for (const auto &elem : vectorInts) // Użycie pętli zakresowej dla czytelności
  {
    std::cout << elem << " ";
  }

  // Usuwanie ostatniego elementu
  vectorInts.pop_back();
  std::cout << "\n\nAfter pop_back(), the vector has these elements:\n";
  for (const auto &elem : vectorInts) // Ponowne użycie pętli zakresowej
  {
    std::cout << elem << " ";
  }

  return 0;
}
