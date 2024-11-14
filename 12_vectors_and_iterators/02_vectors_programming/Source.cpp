#include <algorithm> // Do sortowania i algorytmów STL
#include <iostream>
#include <numeric> // Do akumulacji wartości
#include <vector>

int main() {
  // Tworzenie pustego wektora float
  std::vector<float> vFloat;
  std::cout << "vFloat ma " << vFloat.size() << " elementów.\n";

  // Zmiana rozmiaru wektora na 10 elementów (domyślnie inicjalizowane do 0.0)
  vFloat.resize(10);
  std::cout << "\nvFloat teraz ma " << vFloat.size() << " elementów.\n";

  // Wypełnienie wektora wartościami za pomocą pętli
  for (size_t i = 0; i < vFloat.size(); ++i) {
    vFloat[i] = static_cast<float>(i) * 1.1f; // Przypisanie wartości (mnożenie przez 1.1)
  }

  // Wyświetlanie zawartości wektora
  std::cout << "Zawartość vFloat: ";
  for (const auto &elem : vFloat) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Obliczanie sumy elementów przy użyciu std::accumulate
  float sum = std::accumulate(vFloat.begin(), vFloat.end(), 0.0f);
  std::cout << "Suma elementów wektora: " << sum << "\n";

  // Sortowanie wektora w kolejności malejącej przy użyciu std::sort
  std::sort(vFloat.begin(), vFloat.end(), std::greater<>());
  std::cout << "Zawartość vFloat po sortowaniu malejąco: ";
  for (const auto &elem : vFloat) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Usunięcie kilku elementów z końca wektora
  vFloat.resize(5);
  std::cout << "vFloat po zmianie rozmiaru na 5 elementów: ";
  for (const auto &elem : vFloat) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Dodanie nowych elementów za pomocą metody push_back
  vFloat.push_back(9.9f);
  vFloat.push_back(11.1f);
  std::cout << "vFloat po dodaniu elementów: ";
  for (const auto &elem : vFloat) {
    std::cout << elem << " ";
  }
  std::cout << "\n";

  // Usunięcie wszystkich elementów i sprawdzenie rozmiaru
  vFloat.clear();
  std::cout << "Po wyczyszczeniu vFloat ma " << vFloat.size()
            << " elementów.\n";

  return 0;
}
