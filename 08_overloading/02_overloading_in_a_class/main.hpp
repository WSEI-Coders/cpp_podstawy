#pragma once

#include <iostream>

/**
 * Klasa `Compare` zapewnia metody do porównywania i znajdowania mniejszej
 * wartości dla różnych typów danych. Metody są przeciążone, aby obsługiwać
 * typy: `int`, `float` oraz `char`.
 */
class Compare {
public:
  // Znajduje mniejszą wartość spośród dwóch liczb całkowitych
  int findSmaller(int input1, int input2);

  // Znajduje mniejszą wartość spośród dwóch liczb zmiennoprzecinkowych
  float findSmaller(float input1, float input2);

  // Znajduje mniejszy znak spośród dwóch znaków
  char findSmaller(char input1, char input2);
};

// Implementacja metod inline klasy `Compare`

inline int Compare::findSmaller(int input1, int input2) {
  return (input1 < input2) ? input1 : input2;
}

inline float Compare::findSmaller(float input1, float input2) {
  return (input1 < input2) ? input1 : input2;
}

inline char Compare::findSmaller(char input1, char input2) {
  return (input1 < input2) ? input1 : input2;
}
