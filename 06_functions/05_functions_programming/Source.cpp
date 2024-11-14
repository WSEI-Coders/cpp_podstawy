#include "function.h"

int main() {
  float m1{76.0f}; // Zmienna `m1` typu `float`
  float m2{39.0f}; // Zmienna `m2` typu `float`
  float result{
      0.0f}; // Zmienna `result` typu `float`, przechowująca wynik operacji
  char operation{'+'}; // Zmienna `operation` przechowująca znak operacji

  // Wywołanie funkcji `sum` i przypisanie wyniku do `result`
  result = sum(m1, m2);
  std::cout << m1 << " + " << m2 << " = " << result
            << "\n"; // Wyświetlenie wyniku dodawania

  // Wywołanie funkcji `printEquation` dla operacji wskazanej w `operation`
  printEquation(m1, m2, result, operation);

  return 0;
}
