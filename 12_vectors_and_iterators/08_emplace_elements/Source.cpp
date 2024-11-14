#include <iostream>
#include <vector>

int main() {
  // Inicjalizacja wektora z wartościami początkowymi
  std::vector<int> vectorInts{0, 1, 2, 3, 4, 5, 6, 7};

  std::cout << "vectorInts ma " << vectorInts.size() << " elementów\n";

  // Wyświetlanie początkowych wartości wektora
  std::cout << "Zawartość vectorInts:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Pierwsze wstawienie za pomocą emplace
  {
    auto it = vectorInts.begin() + 1; // Pobranie iteratora
    vectorInts.emplace(it, -1);       // Wstawienie nowego elementu
  }
  std::cout << "\nPo pierwszym wstawieniu:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Drugie wstawienie za pomocą emplace
  {
    auto it = vectorInts.begin() +
              3; // Upewnienie się, że iterator jest aktualizowany
    vectorInts.emplace(it, -2); // Wstawienie nowego elementu
  }
  std::cout << "\nPo drugim wstawieniu:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Trzecie wstawienie za pomocą emplace
  {
    auto it = vectorInts.begin() + 5; // Aktualizacja iteratora
    vectorInts.emplace(it, -3);       // Wstawienie nowego elementu
  }
  std::cout << "\nPo trzecim wstawieniu:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  return 0;
}
