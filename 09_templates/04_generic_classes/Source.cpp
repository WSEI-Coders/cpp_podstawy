#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja użycia klasy szablonowej `StudentRecord` z różnymi typami
 * danych dla ocen uczniów.
 */
int main() {
  // Tworzenie obiektu `StudentRecord` dla ocen w postaci `int`
  StudentRecord<int> srInt(3);
  srInt.setId(111111);
  srInt.printGrades();

  // Tworzenie obiektu `StudentRecord` dla ocen w postaci `char`
  StudentRecord<char> srChar('B');
  srChar.setId(222222);
  srChar.printGrades();

  // Tworzenie obiektu `StudentRecord` dla ocen w postaci `float`
  StudentRecord<float> srFloat(3.333f);
  srFloat.setId(333333);
  srFloat.printGrades();

  // Tworzenie obiektu `StudentRecord` dla ocen w postaci `std::string`
  StudentRecord<std::string> srString("B-");
  srString.setId(4444);
  srString.printGrades();

  return 0;
}
