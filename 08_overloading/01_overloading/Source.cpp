#include <iostream>

/**
 * Funkcja `findSmaller` znajduje mniejszą wartość spośród dwóch liczb
 * całkowitych.
 *
 * @param input1 Pierwsza liczba całkowita
 * @param input2 Druga liczba całkowita
 * @return Mniejsza wartość spośród `input1` i `input2`
 */
int findSmaller(int input1, int input2);

/**
 * Funkcja `findSmaller` znajduje mniejszą wartość spośród dwóch liczb
 * zmiennoprzecinkowych.
 *
 * @param input1 Pierwsza liczba zmiennoprzecinkowa
 * @param input2 Druga liczba zmiennoprzecinkowa
 * @return Mniejsza wartość spośród `input1` i `input2`
 */
float findSmaller(float input1, float input2);

/**
 * Funkcja `findSmaller` znajduje mniejszy znak spośród dwóch znaków.
 *
 * @param input1 Pierwszy znak
 * @param input2 Drugi znak
 * @return Mniejszy znak spośród `input1` i `input2`
 */
char findSmaller(char input1, char input2);

int main() {
  int a = 5;
  int b = 4;
  float f1 = 5.43;
  float f2 = 6.32;
  char c1 = 'c';
  char c2 = 'z';

  // Wywołanie przeciążonych funkcji `findSmaller` dla różnych typów danych
  std::cout << findSmaller(a, b) << " is the smaller of " << a << " and " << b
            << "\n";
  std::cout << findSmaller(f1, f2) << " is the smaller of " << f1 << " and "
            << f2 << "\n";
  std::cout << findSmaller(c1, c2) << " is the smaller of " << c1 << " and "
            << c2 << "\n";

  return 0;
}

/**
 * Implementacja funkcji `findSmaller` dla liczb całkowitych.
 */
int findSmaller(int input1, int input2) {
  if (input1 < input2)
    return input1;
  return input2;
}

/**
 * Implementacja funkcji `findSmaller` dla liczb zmiennoprzecinkowych.
 */
float findSmaller(float input1, float input2) {
  if (input1 < input2)
    return input1;
  return input2;
}

/**
 * Implementacja funkcji `findSmaller` dla znaków.
 */
char findSmaller(char input1, char input2) {
  if (input1 < input2)
    return input1;
  return input2;
}
