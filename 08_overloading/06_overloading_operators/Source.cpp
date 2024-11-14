#include <iostream>

/**
 * Klasa `Shape` reprezentuje prostokąt o określonej długości i szerokości.
 * Zapewnia możliwość obliczenia powierzchni oraz przeciążenia operatora `+`
 * do sumowania powierzchni dwóch obiektów `Shape`.
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

  // Przeciążenie operatora `+` do sumowania powierzchni dwóch obiektów `Shape`
  int operator+(Shape shapeIn) { return Area() + shapeIn.Area(); }
};

/**
 * Funkcja główna programu
 * - Tworzy dwa obiekty `Shape`.
 * - Oblicza i wyświetla powierzchnie obu obiektów.
 * - Demonstruje użycie przeciążonego operatora `+` do sumowania powierzchni.
 */
int main() {
  Shape sh1(4, 4); // Utworzenie obiektu `Shape` z długością 4 i szerokością 4
  Shape sh2(2, 6); // Utworzenie obiektu `Shape` z długością 2 i szerokością 6

  // Użycie przeciążonego operatora `+` do sumowania powierzchni obiektów `sh1`
  // i `sh2`
  int total = sh1 + sh2;

  // Wyświetlenie powierzchni każdego obiektu
  std::cout << "\nsh1.Area() = " << sh1.Area();
  std::cout << "\nsh2.Area() = " << sh2.Area();
  std::cout << "\nTotal = " << total; // Wyświetlenie łącznej powierzchni

  return 0;
}
