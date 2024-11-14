#pragma once // Zapewnia, że plik nagłówkowy zostanie włączony tylko raz, co
             // zapobiega problemom z wielokrotnym włączaniem.

#include <cmath> // Biblioteka matematyczna, używana tutaj do funkcji `std::nanf()`.
#include <iostream> // Standardowa biblioteka do operacji wejścia/wyjścia.

// Funkcja `sum` zwraca sumę dwóch liczb `m1` i `m2`.
float sum(float m1, float m2) { return m1 + m2; }

// Funkcja `printEquation` wykonuje operację matematyczną na dwóch liczbach `m1`
// i `m2` zgodnie z dostarczonym znakiem operacji `operation`. Wynik operacji
// jest przypisywany do zmiennej `result` przekazanej przez referencję.
void printEquation(const float &m1, const float &m2, float &result,
                   const char &operation) {
  switch (operation) {
  case '+':
    result = m1 + m2;
    break;
  case '-':
    result = m1 - m2;
    break;
  case '*':
    result = m1 * m2;
    break;
  case '/':
    if (m2 == 0) { // Sprawdzenie, czy `m2` jest zerem, aby zapobiec dzieleniu
                   // przez zero.
      std::cerr << "Divide by 0!\n"; // Wyświetlenie komunikatu o błędzie na
                                     // standardowym wyjściu błędów.
      result =
          std::nanf(""); // Przypisanie wartości "not-a-number" (NaN) do wyniku.
      break;
    }
    result = m1 / m2;
    break;
  default:
    std::cerr << "Wrong operation\n"; // Obsługa nieznanego znaku operacji.
    result =
        std::nanf(""); // Przypisanie wartości "not-a-number" (NaN) do wyniku.
    break;
  }
}
