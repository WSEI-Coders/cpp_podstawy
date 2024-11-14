#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja użycia klasy szablonowej `Multiplier` do mnożenia liczb
 * całkowitych i zmiennoprzecinkowych.
 */
int main() {
  Multiplier<int> multi1; // Obiekt klasy `Multiplier` do mnożenia liczb całkowitych
  Multiplier<float> multi3; // Obiekt klasy `Multiplier` do mnożenia liczb
                            // zmiennoprzecinkowych

  // Pobranie danych wejściowych do mnożenia liczb całkowitych
  int input1, input2;
  std::cout << "Enter two values for integer multiplication: ";
  std::cin >> input1;
  std::cin >> input2;

  // Ustawienie wartości i obliczenie iloczynu
  multi1.setM1(input1);
  multi1.setM2(input2);
  multi1.setProduct();
  multi1.printEquation(); // Wyświetlenie wyniku

  std::cout << "\n";

  // Pobranie danych wejściowych do mnożenia liczb zmiennoprzecinkowych
  float input3, input4;
  std::cout << "Enter two values for float multiplication: ";
  std::cin >> input3;
  std::cin >> input4;

  // Ustawienie wartości i obliczenie iloczynu
  multi3.setM1(input3);
  multi3.setM2(input4);
  multi3.setProduct();
  multi3.printEquation(); // Wyświetlenie wyniku

  return 0;
}
