#pragma once

#include <iostream>

/**
 * Klasa szablonowa `Multiplier` umożliwia przechowywanie i wykonywanie operacji
 * mnożenia na dwóch wartościach dowolnego typu. Klasa oferuje metody do
 * ustawiania wartości, obliczania i pobierania wyniku mnożenia.
 */
template <class T> class Multiplier {
private:
  T M1;      // Pierwsza wartość do mnożenia
  T M2;      // Druga wartość do mnożenia
  T product; // Wynik mnożenia

public:
  // Konstruktor domyślny ustawiający wszystkie wartości na 0
  Multiplier();

  // Metody do ustawiania wartości M1, M2 oraz obliczania iloczynu
  void setM1(T input);
  void setM2(T input);
  void setProduct();

  // Metody do pobierania wartości M1, M2 oraz iloczynu
  T getProduct() const;
  T getM1() const;
  T getM2() const;

  // Wyświetla równanie mnożenia w formacie "M1 * M2 = product"
  void printEquation() const;
};

// Implementacja konstruktora domyślnego
template <class T> Multiplier<T>::Multiplier() {
  M1 = 0;
  M2 = 0;
  product = 0;
}

// Implementacja metody ustawiającej pierwszą wartość
template <class T> void Multiplier<T>::setM1(T input) { M1 = input; }

// Implementacja metody ustawiającej drugą wartość
template <class T> void Multiplier<T>::setM2(T input) { M2 = input; }

// Implementacja metody obliczającej iloczyn
template <class T> void Multiplier<T>::setProduct() { product = M1 * M2; }

// Implementacja metod zwracających wartości M1, M2 oraz iloczyn
template <class T> T Multiplier<T>::getM1() const { return M1; }

template <class T> T Multiplier<T>::getM2() const { return M2; }

template <class T> T Multiplier<T>::getProduct() const { return product; }

// Implementacja metody wyświetlającej równanie mnożenia
template <class T> void Multiplier<T>::printEquation() const {
  std::cout << M1 << " * " << M2 << " = " << product;
}
