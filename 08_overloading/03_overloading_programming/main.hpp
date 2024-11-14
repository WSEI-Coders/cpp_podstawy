#pragma once

#include <iostream>

/**
 * Klasa `Compare` zapewnia metody do porównywania i znajdowania najmniejszej
 * wartości dla różnych typów danych i zestawów wartości (pojedyncze liczby,
 * trzy liczby, tablice). Metody są przeciążone, aby obsługiwać typy `int`,
 * `float` i `char`.
 */
class Compare {
public:
  // Znajdowanie mniejszej wartości spośród dwóch liczb całkowitych
  int findSmaller(int input1, int input2);
  // Znajdowanie mniejszej wartości spośród dwóch liczb zmiennoprzecinkowych
  float findSmaller(float input1, float input2);
  // Znajdowanie mniejszego znaku spośród dwóch znaków
  char findSmaller(char input1, char input2);

  // Znajdowanie najmniejszej wartości spośród trzech liczb całkowitych
  int findSmaller(int input1, int input2, int input3);
  // Znajdowanie najmniejszej wartości spośród trzech liczb zmiennoprzecinkowych
  float findSmaller(float input1, float input2, float input3);
  // Znajdowanie najmniejszego znaku spośród trzech znaków
  char findSmaller(char input1, char input2, char input3);

  // Znajdowanie najmniejszej wartości w tablicy liczb całkowitych
  int findSmaller(int *arr, int n);
  // Znajdowanie najmniejszej wartości w tablicy liczb zmiennoprzecinkowych
  float findSmaller(float *arr, int n);
  // Znajdowanie najmniejszego znaku w tablicy znaków
  char findSmaller(char *arr, int n);
};

// Implementacje metod inline klasy `Compare`

inline int Compare::findSmaller(int input1, int input2) {
  return (input1 < input2) ? input1 : input2;
}

inline float Compare::findSmaller(float input1, float input2) {
  return (input1 < input2) ? input1 : input2;
}

inline char Compare::findSmaller(char input1, char input2) {
  return (input1 < input2) ? input1 : input2;
}

inline int Compare::findSmaller(int input1, int input2, int input3) {
  auto tmp = findSmaller(input1, input2);
  return (tmp < input3) ? tmp : input3;
}

inline float Compare::findSmaller(float input1, float input2, float input3) {
  auto tmp = findSmaller(input1, input2);
  return (tmp < input3) ? tmp : input3;
}

inline char Compare::findSmaller(char input1, char input2, char input3) {
  auto tmp = findSmaller(input1, input2);
  return (tmp < input3) ? tmp : input3;
}

inline int Compare::findSmaller(int *arr, int n) {
  auto smaller = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] < smaller)
      smaller = arr[i];
  }
  return smaller;
}

inline float Compare::findSmaller(float *arr, int n) {
  auto smaller = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] < smaller)
      smaller = arr[i];
  }
  return smaller;
}

inline char Compare::findSmaller(char *arr, int n) {
  auto smaller = arr[0];
  for (int i = 1; i < n; ++i) {
    if (arr[i] < smaller)
      smaller = arr[i];
  }
  return smaller;
}
