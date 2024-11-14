#include <iostream>

/**
 * Szablon funkcji `getBigger` przyjmuje dwa argumenty różnych typów `T` i `U` i
 * zwraca większy z nich. Dzięki użyciu szablonów funkcja może obsługiwać różne
 * typy danych.
 *
 * @param input1 Pierwsza wartość do porównania
 * @param input2 Druga wartość do porównania
 * @return Większa z wartości `input1` lub `input2` (zwrotna jako typ `T`)
 */
template <typename T, typename U> T getBigger(T input1, U input2);

int main() {
  int a = 5;
  float b = 6.334f;

  // Wywołanie funkcji `getBigger` dla różnych typów danych
  std::cout << "Between " << a << " and " << b << ", " << getBigger(a, b)
            << " is bigger.\n";
  std::cout << "Between " << b << " and " << a << ", " << getBigger(b, a)
            << " is bigger.\n";

  return 0;
}

/**
 * Implementacja funkcji szablonowej `getBigger`.
 * Funkcja porównuje dwie wartości i zwraca większą z nich.
 *
 * @param input1 Pierwsza wartość do porównania
 * @param input2 Druga wartość do porównania
 * @return Większa wartość spośród `input1` i `input2`
 */
template <typename T, typename U> T getBigger(T input1, U input2) {
  if (input1 > input2)
    return input1;
  return input2;
}
