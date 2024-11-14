#include <iostream>
#include <string>

/**
 * Funkcja szablonowa `findSmaller` porównuje dwie wartości dowolnego typu i
 * zwraca mniejszą z nich. Dzięki użyciu szablonów można korzystać z tej samej
 * funkcji dla różnych typów danych, takich jak `int`, `float`, `char`, czy
 * `std::string`.
 */
template <typename T> T findSmaller(T input1, T input2);

int main() {
  // Przykładowe dane różnych typów do porównania
  int a = 54;
  int b = 89;
  float f1 = 7.8;
  float f2 = 9.1;
  char c1 = 'f';
  char c2 = 'h';
  std::string s1 = "Hello";
  std::string s2 = "Bots are fun";

  // Użycie funkcji szablonowej do porównania różnych typów danych
  std::cout << "\nIntegers compared: " << findSmaller(a, b);
  std::cout << "\nFloats compared: " << findSmaller(f1, f2);
  std::cout << "\nChars compared: " << findSmaller(c1, c2);
  std::cout << "\nStrings compared: " << findSmaller(s1, s2);
  return 0;
}

/**
 * Implementacja funkcji szablonowej `findSmaller`.
 * Funkcja zwraca mniejszą z dwóch przekazanych wartości.
 *
 * @param input1 Pierwsza wartość do porównania
 * @param input2 Druga wartość do porównania
 * @return Mniejsza z wartości `input1` lub `input2`
 */
template <typename T> T findSmaller(T input1, T input2) {
  if (input1 < input2)
    return input1;
  else
    return input2;
}
