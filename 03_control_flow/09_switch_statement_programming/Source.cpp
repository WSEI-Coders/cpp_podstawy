/**
 * Program prostego kalkulatora obsługującego podstawowe operacje arytmetyczne
 *
 * Opis:
 * - Program pobiera od użytkownika dwie liczby zmiennoprzecinkowe i operator
 * arytmetyczny.
 * - Obsługiwane operatory to: `+`, `-`, `*`, `/`.
 * - Program używa instrukcji `switch` do wykonania operacji arytmetycznej na
 * podanych liczbach.
 */

#include <iostream>

int main() {
  float in1, in2; // Zmienne przechowujące dane wejściowe od użytkownika

  // Pobranie dwóch liczb od użytkownika
  std::cout << "Enter two numbers:\n";
  std::cin >> in1 >> in2;

  // Pobranie operatora arytmetycznego od użytkownika
  std::cout << "Enter the operation '+', '-', '*', '/':\n";
  char operation;
  std::cin >> operation;

  // Obsługa operacji za pomocą instrukcji `switch`
  switch (operation) {
  case '+':
    // Dodawanie
    std::cout << in1 << " + " << in2 << " = " << in1 + in2 << std::endl;
    break;
  case '-':
    // Odejmowanie
    std::cout << in1 << " - " << in2 << " = " << in1 - in2 << std::endl;
    break;
  case '*':
    // Mnożenie
    std::cout << in1 << " * " << in2 << " = " << in1 * in2 << std::endl;
    break;
  case '/':
    // Dzielenie, z kontrolą dzielenia przez zero
    if (in2 != 0) {
      std::cout << in1 << " / " << in2 << " = " << in1 / in2 << std::endl;
    } else {
      std::cout << "Division by zero is not allowed.\n";
    }
    break;
  default:
    // Obsługa niepoprawnego operatora
    std::cout
        << "Incorrect operation! Please enter one of '+', '-', '*', '/'.\n";
  }

  return 0;
}
