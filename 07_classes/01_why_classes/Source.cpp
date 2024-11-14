/*
 * Problem sortowania danych studentów bez obiektowego podejścia
 *
 * Opis:
 * - Program zawiera listę studentów przechowywaną jako `std::vector` par, gdzie
 * każda para składa się z:
 *   1. `std::string` przechowującego imię i nazwisko studenta
 *   2. `std::pair<int, int>` przechowującego ID oraz rok ukończenia.
 * - Sortowanie studentów odbywa się według różnych kryteriów: imienia, ID oraz
 * roku ukończenia.
 * - Program demonstruje trudności związane z ręcznym zarządzaniem i sortowaniem
 * danych.
 */

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// Funkcja szablonowa do wyświetlania zawartości `std::vector`
template <class T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &vec) {
  for (const auto &e : vec) {
    out << e << " ";
  }
  return out;
}

// Komparator sortujący według ID studenta
bool comparator_id(const std::pair<std::string, std::pair<int, int>> &p1,
                   const std::pair<std::string, std::pair<int, int>> &p2) {
  return p1.second.first <
         p2.second.first; // Porównanie według ID (p1.second.first)
}

// Komparator sortujący według roku ukończenia
bool comparator_year(const std::pair<std::string, std::pair<int, int>> &p1,
                     const std::pair<std::string, std::pair<int, int>> &p2) {
  return p1.second.second <
         p2.second.second; // Porównanie według roku (p1.second.second)
}

int main() {
  // Wektor przechowujący dane studentów w postaci par
  std::vector<std::pair<std::string, std::pair<int, int>>> students{
      {"Joe Lime", {15, 2019}},       {"Bob Green", {3, 2020}},
      {"SallyAnne Green", {1, 2017}}, {"Annie Blue", {10, 2020}},
      {"Jose Lemon", {25, 2016}},
  };

  // Sortowanie według imienia (domyślna kolejność sortowania `std::pair`)
  std::cout << "Sort by name:\n";
  std::sort(students.begin(), students.end());
  for (const auto &e : students) {
    std::cout << e.first << " " << e.second.first << " " << e.second.second
              << std::endl;
  }
  std::cout << std::endl;

  // Sortowanie według ID
  std::cout << "Sort by id:\n";
  std::sort(students.begin(), students.end(), comparator_id);
  for (const auto &e : students) {
    std::cout << e.first << " " << e.second.first << " " << e.second.second
              << std::endl;
  }
  std::cout << std::endl;

  // Sortowanie według roku ukończenia
  std::cout << "Sort by year:\n";
  std::sort(students.begin(), students.end(), comparator_year);
  for (const auto &e : students) {
    std::cout << e.first << " " << e.second.first << " " << e.second.second
              << std::endl;
  }
  std::cout << std::endl;

  return 0;
}

/*
Wyjaśnienie problemu:

    Brak spójności danych:
        W tym przykładzie dane studentów są przechowywane w złożonych strukturach (std::pair i std::vector), co sprawia, że zarządzanie nimi jest trudniejsze.
        Trzeba używać komparatorów, aby ręcznie sortować dane według różnych kryteriów.

    Przejrzystość kodu:
        Kod staje się trudny do zrozumienia i rozwijania, ponieważ operacje na danych studentów muszą być ręcznie implementowane.
        Dodanie nowych pól lub kryteriów sortowania wymagałoby modyfikacji całej logiki.

Wprowadzenie do obiektowego podejścia (OOP):

    Dzięki obiektowemu podejściu można utworzyć klasę Student, która przechowuje dane i udostępnia metody sortujące.
    OOP pozwala na enkapsulację danych i logiki, co ułatwia zarządzanie i rozszerzanie kodu.
*/