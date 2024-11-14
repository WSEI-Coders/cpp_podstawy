#include "main.hpp"

int main() {
  // Tworzenie pustego wektora typu float
  std::vector<float> vFloat;

  std::cout << "vFloat ma " << vFloat.size() << " elementów.\n";

  // Dodawanie 10 elementów o wartości 8.8 do wektora
  std::cout << "\nDodawanie 10 elementów o wartości 8.8 do wektora.\n";
  vFloat.assign(10, 8.8f);

  std::cout << "vFloat ma teraz " << vFloat.size() << " elementów.\n";

  // Wyświetlenie elementów wektora za pomocą funkcji pomocniczej
  printVector(vFloat);

  // Dodanie nowych elementów za pomocą push_back
  vFloat.push_back(12.5f);
  vFloat.push_back(15.0f);
  std::cout << "\nPo dodaniu nowych elementów vFloat ma " << vFloat.size()
            << " elementów.\n";

  // Wyświetlenie elementów za pomocą funkcji printVector
  printVector(vFloat);

  // Usunięcie elementu na końcu
  vFloat.pop_back();
  std::cout << "\nPo usunięciu ostatniego elementu vFloat ma " << vFloat.size()
            << " elementów.\n";

  // Wyświetlenie elementów po operacjach
  printVector(vFloat);

  return 0;
}
