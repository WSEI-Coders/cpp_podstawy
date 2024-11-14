/**
 * Program do wykonywania podstawowych operacji matematycznych przy użyciu
 * funkcji w C++
 *
 * Opis:
 * - Program definiuje cztery funkcje: dodawanie, odejmowanie, mnożenie i
 * dzielenie.
 * - Funkcje przyjmują dwa argumenty typu `float` i zwracają wynik operacji jako
 * `float`.
 * - Funkcja `main()` wywołuje każdą z funkcji i wyświetla wyniki operacji.
 */

#include <iostream>

// Deklaracje funkcji matematycznych
float add(float m1, float m2);  // Funkcja dodawania
float sub(float m1, float m2);  // Funkcja odejmowania
float mult(float m1, float m2); // Funkcja mnożenia
float div(float m1, float m2);  // Funkcja dzielenia

int main() {
  float m1 = 4.0; // Pierwsza liczba
  float m2 = 3.5; // Druga liczba
  float answer;   // Zmienna do przechowywania wyniku

  // Wywołanie funkcji `add()` i wyświetlenie wyniku
  answer = add(m1, m2);
  std::cout << m1 << " + " << m2 << " = " << answer << "\n";

  // Bezpośrednie wywołania funkcji i wyświetlanie wyników
  std::cout << m1 << " - " << m2 << " = " << sub(m1, m2) << "\n";
  std::cout << m1 << " * " << m2 << " = " << mult(m1, m2) << "\n";
  std::cout << m1 << " / " << m2 << " = " << div(m1, m2) << "\n";

  return 0;
}

// Definicje funkcji matematycznych
float add(float m1, float m2) {
  return m1 + m2; // Zwraca sumę dwóch liczb
}

float sub(float m1, float m2) {
  return m1 - m2; // Zwraca różnicę dwóch liczb
}

float mult(float m1, float m2) {
  return m1 * m2; // Zwraca iloczyn dwóch liczb
}

float div(float m1, float m2) {
  return m1 / m2; // Zwraca iloraz dwóch liczb
}
