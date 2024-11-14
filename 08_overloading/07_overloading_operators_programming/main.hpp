#pragma once

#include <iostream>

/**
 * Klasa `Shape` reprezentuje prostokąt z określoną długością i szerokością.
 * Oferuje metody do obliczenia powierzchni oraz przeciążenie operatora `+`,
 * który sumuje wymiary dwóch prostokątów i oblicza powierzchnię wynikowego
 * kształtu.
 */
class Shape {
private:
  int length; // Długość prostokąta
  int width;  // Szerokość prostokąta

public:
  // Konstruktor z domyślnymi wartościami długości i szerokości
  Shape(int l = 2, int w = 2) {
    length = l;
    width = w;
  }

  // Funkcja obliczająca powierzchnię prostokąta
  double Area() { return length * width; }

  // Getter dla szerokości
  int getWidth() { return width; }

  // Getter dla długości
  int getLength() { return length; }

  // Przeciążenie operatora `+` do sumowania wymiarów dwóch obiektów `Shape` i
  // obliczenia powierzchni wynikowej
  int operator+(Shape shapeIn) {
    return ((width + shapeIn.getWidth()) * (length + shapeIn.getLength()));
  }
};
