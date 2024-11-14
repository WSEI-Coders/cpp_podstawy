#pragma once

#include <iostream>
#include <string>
using namespace std;

/**
 * Klasa `Square` reprezentuje prostokąt o długości i szerokości.
 * Klasa umożliwia tworzenie obiektów z domyślnymi i niestandardowymi wymiarami.
 */
class Square {
private:
  int length; // Długość prostokąta
  int width;  // Szerokość prostokąta

public:
  // Konstruktor domyślny, który ustawia długość i szerokość na 0
  Square();

  // Konstruktor z parametrami, który pozwala ustawić niestandardowe wartości
  // długości i szerokości
  Square(int lenIn, int widIn);

  // Funkcja zwracająca długość prostokąta
  int getLength();

  // Funkcja zwracająca szerokość prostokąta
  int getWidth();
};

// Implementacja konstruktora domyślnego
inline Square::Square() {
  length = 0;
  width = 0;
}

// Implementacja konstruktora z parametrami
inline Square::Square(int lenIn, int widIn) {
  length = lenIn;
  width = widIn;
}

// Implementacja funkcji zwracającej długość
inline int Square::getLength() { return length; }

// Implementacja funkcji zwracającej szerokość
inline int Square::getWidth() { return width; }
