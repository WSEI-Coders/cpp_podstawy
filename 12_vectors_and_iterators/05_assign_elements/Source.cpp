#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  // Tworzenie pustego wektora typu int
  std::vector<int> vectorInts;

  // Użycie iteratora do wektora (w nowoczesnym C++ możemy użyć `auto`)
  std::cout << "vectorInts ma " << vectorInts.size() << " elementów.\n";

  // Dodawanie pojedynczego elementu o wartości 23
  std::cout << "\nDodawanie wartości 23 do wektora\n";
  vectorInts.assign(1,
                    23); // assign(1, 23) przypisuje jeden element o wartości 23
  std::cout << "Elementy wektora po dodaniu 23: ";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Dodawanie czterech elementów o wartości 3
  std::cout << "\nDodawanie czterech elementów o wartości 3 do wektora\n";
  vectorInts.assign(4,
                    3); // assign(4, 3) przypisuje cztery elementy o wartości 3
  std::cout << "vectorInts ma teraz " << vectorInts.size() << " elementów.\n";

  // Wyświetlanie elementów wektora po zmianach
  std::cout << "Elementy wektora po zmianach:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Dodanie elementów za pomocą push_back
  std::cout << "\nDodawanie elementów za pomocą push_back:\n";
  vectorInts.push_back(5);
  vectorInts.push_back(10);
  std::cout << "vectorInts ma teraz " << vectorInts.size() << " elementów.\n";
  std::cout << "Elementy po dodaniu za pomocą push_back: ";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Usunięcie ostatniego elementu za pomocą pop_back
  std::cout << "\nUsuwanie ostatniego elementu za pomocą pop_back.\n";
  vectorInts.pop_back();
  std::cout << "vectorInts ma teraz " << vectorInts.size() << " elementów.\n";
  std::cout << "Elementy po pop_back: ";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Sortowanie elementów wektora
  std::cout << "\nSortowanie elementów wektora:\n";
  std::sort(vectorInts.begin(), vectorInts.end());
  std::cout << "Elementy po sortowaniu: ";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  return 0;
}
