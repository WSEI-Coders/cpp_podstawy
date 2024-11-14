#include <iostream>
#include <vector>

int main() {
  // Tworzenie pustego wektora typu int
  std::vector<int> vectorInts;

  // Wyświetlenie początkowego rozmiaru wektora
  std::cout << "vectorInts ma " << vectorInts.size() << " elementów.\n";

  // Dodawanie pojedynczego elementu o wartości 23 za pomocą metody assign
  std::cout << "\nDodawanie wartości 23 do wektora za pomocą assign\n";
  vectorInts.assign(1, 23); // assign tworzy wektor z 1 elementem o wartości 23
  std::cout << "Elementy wektora:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Dodawanie czterech elementów za pomocą push_back
  std::cout << "\nDodawanie czterech elementów za pomocą push_back\n";
  vectorInts.push_back(24);
  vectorInts.push_back(25);
  vectorInts.push_back(26);
  vectorInts.push_back(27);
  std::cout << "vectorInts ma teraz " << vectorInts.size() << " elementów.\n";

  // Wyświetlanie elementów wektora
  std::cout << "Zawartość vectorInts:\n";
  for (const auto &elem : vectorInts)
    std::cout << elem << " ";
  std::cout << "\n";

  // Przykład użycia iteratora do wyświetlania elementów (alternatywa dla
  // range-based for loop)
  std::cout << "\nWyświetlanie elementów za pomocą iteratora:\n";
  for (auto it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout << *it << " ";
  std::cout << "\n";

  return 0;
}
