#include <iostream>
#include <vector>

int main() {
  std::vector<int> vectorInts{0, 1, 2, 3, 4, 5, 6, 7};

  std::cout << "vectorInts ma " << vectorInts.size() << " elementów\n";

  // Wyświetlanie początkowych elementów wektora
  std::cout << "Elementy vectorInts:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Pierwsze wstawienie
  {
    std::vector<int>::iterator it = vectorInts.begin(); // Pobranie iteratora
    vectorInts.insert(it + 1, -1);                      // Bezpieczne wstawienie
  }
  std::cout << "\nPo pierwszym wstawieniu:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Drugie wstawienie
  {
    std::vector<int>::iterator it = vectorInts.begin();
    vectorInts.insert(it + 3, -2); // Bezpieczne wstawienie
  }
  std::cout << "\nPo drugim wstawieniu:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Trzecie wstawienie
  {
    std::vector<int>::iterator it = vectorInts.begin();
    vectorInts.insert(it + 5, -3); // Bezpieczne wstawienie
  }
  std::cout << "\nPo trzecim wstawieniu:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  return 0;
}
