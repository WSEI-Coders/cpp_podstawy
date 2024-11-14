#include <algorithm> // Do sortowania za pomocą std::sort
#include <iostream>
#include <ranges> // Do korzystania z algorytmów ranges (C++20)
#include <vector>

int main() {
  // Inicjalizacja pustego wektora intów
  std::vector<int> vectorInts;
  std::cout << "vectorInts ma " << vectorInts.size() << " elementów.\n";

  // Zmiana rozmiaru wektora na 6 elementów (domyślnie zainicjalizowanych do 0)
  vectorInts.resize(6);
  std::cout << "\nvectorInts teraz ma " << vectorInts.size() << " elementów.\n";

  // Dodawanie elementów na końcu wektora za pomocą metody push_back
  vectorInts.push_back(10);
  vectorInts.push_back(20);
  std::cout << "\nPo dodaniu elementów vectorInts ma " << vectorInts.size()
            << " elementów.\n";

  // Wyświetlanie zawartości wektora za pomocą pętli
  std::cout << "Zawartość vectorInts: ";
  for (const auto &elem : vectorInts) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Usuwanie ostatniego elementu za pomocą metody pop_back
  vectorInts.pop_back();
  std::cout << "Po usunięciu ostatniego elementu vectorInts ma "
            << vectorInts.size() << " elementów.\n";

  // Wyświetlanie zawartości wektora po usunięciu ostatniego elementu
  std::cout << "Zawartość vectorInts: ";
  for (const auto &elem : vectorInts) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Dodanie kilku elementów i sortowanie przy użyciu std::ranges::sort (C++20)
  vectorInts.push_back(15);
  vectorInts.push_back(5);
  vectorInts.push_back(25);
  std::cout << "Dodano elementy: 15, 5, 25.\n";
  std::ranges::sort(vectorInts); // Sortowanie wektora w kolejności rosnącej
  std::cout << "Zawartość vectorInts po sortowaniu: ";
  for (const auto &elem : vectorInts) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Przykład użycia std::vector z typem std::string
  std::vector<std::string> stringVec = {"C++", "Vector", "is", "awesome"};
  std::cout << "\nZawartość stringVec: ";
  for (const auto &word : stringVec) {
    std::cout << word << " ";
  }
  std::cout << "\n";

  // Wyszukiwanie elementu za pomocą std::find (C++11)
  auto it = std::find(stringVec.begin(), stringVec.end(), "Vector");
  if (it != stringVec.end()) {
    std::cout << "Znaleziono element: " << *it << "\n";
  } else {
    std::cout << "Element nie znaleziony.\n";
  }

  return 0;
}
