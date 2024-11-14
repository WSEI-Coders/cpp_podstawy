#pragma once

/**
 * Klasa `Shape` reprezentuje prostokąt o określonej długości i szerokości.
 * Klasa umożliwia obliczenie powierzchni oraz porównanie dwóch obiektów
 * `Shape`.
 */
class Shape {
public:
  // Konstruktor z wartościami domyślnymi dla długości i szerokości
  Shape(int length = 2, int width = 2) : length{length}, width{width} {}

  // Funkcja do obliczania powierzchni prostokąta
  double Area() const { return length * width; }

  // Funkcja porównująca powierzchnię z innym obiektem `Shape` przy użyciu
  // wskaźnika `this`
  bool compareWithThis(Shape shape) { return this->Area() > shape.Area(); }

  // Funkcja porównująca powierzchnię bez użycia wskaźnika `this`
  bool compare(Shape shape) { return Area() > shape.Area(); }

private:
  int length; // Długość prostokąta
  int width;  // Szerokość prostokąta
};
