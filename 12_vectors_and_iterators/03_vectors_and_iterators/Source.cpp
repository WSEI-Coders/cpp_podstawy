#include <iostream>
#include <vector>

int main() {
  // Tworzenie pustego wektora intów
  std::vector<int> vectorInts;

  // Iterator do wektora (nie jest konieczne użycie, można wykorzystać pętle
  // range-based)
  std::vector<int>::iterator it;

  std::cout << "vectorInts ma " << vectorInts.size() << " elementów.\n";

  std::cout << "\nDodawanie czterech elementów do wektora z wartością 3\n";

  // Przypisanie wartości 3 do czterech elementów wektora
  vectorInts.assign(4, 3);
  std::cout << "vectorInts ma " << vectorInts.size() << " elementów.\n";

  std::cout << "vectorInts ma następujące elementy:\n";
  // Wyświetlanie elementów za pomocą iteratora
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout << *it << " ";
  std::cout << "\n";

  // Dodanie nowych elementów za pomocą push_back
  vectorInts.push_back(10);
  vectorInts.push_back(20);
  std::cout << "Dodano dwa nowe elementy (10 i 20).\n";
  std::cout << "vectorInts ma teraz " << vectorInts.size() << " elementów.\n";

  // Wyświetlanie elementów za pomocą pętli range-based (nowoczesne podejście)
  std::cout << "Zawartość vectorInts: ";
  for (const auto &elem : vectorInts) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Użycie `emplace_back` do dodania elementu bezpośrednio na końcu wektora
  vectorInts.emplace_back(30);
  std::cout << "Dodano element 30 za pomocą emplace_back.\n";
  std::cout << "vectorInts ma teraz " << vectorInts.size() << " elementów.\n";

  // Usunięcie ostatniego elementu za pomocą pop_back
  vectorInts.pop_back();
  std::cout << "Usunięto ostatni element za pomocą pop_back.\n";
  std::cout << "vectorInts ma teraz " << vectorInts.size() << " elementów.\n";

  // Wyświetlanie elementów po operacjach
  std::cout << "Zawartość vectorInts po operacjach: ";
  for (const auto &elem : vectorInts) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  return 0;
}
