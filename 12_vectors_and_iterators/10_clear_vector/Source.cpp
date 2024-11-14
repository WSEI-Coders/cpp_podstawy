#include <iostream>
#include <vector>

int main() {
  std::vector<int> vectorInts;

  // Dodawanie elementów do wektora
  for (int i = 0; i < 8; ++i) {
    vectorInts.push_back(i);
  }

  std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

  std::cout << "VectorInts has these elements:\n";
  for (const auto &elem :
       vectorInts) // Użycie zakresowej pętli for zamiast iteratora
  {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Czyszczenie wektora
  vectorInts.clear();
  std::cout << "After clear, vectorInts has " << vectorInts.size()
            << " elements\n";

  // Próba dostępu do wektora po jego wyczyszczeniu
  if (!vectorInts.empty()) {
    std::cout << "VectorInts still has these elements:\n";
    for (const auto &elem : vectorInts) {
      std::cout << elem << " ";
    }
  } else {
    std::cout << "VectorInts is empty.\n";
  }

  return 0;
}
