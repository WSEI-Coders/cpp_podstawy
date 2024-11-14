#pragma once

#include <iostream>
#include <cmath>

// Funkcja `calculate` wykonuje operację matematyczną na dwóch liczbach `input1`
// i `input2` zgodnie z dostarczonym znakiem operacji `operation` i przypisuje
// wynik do `result`.
void calculate(float &input1, float &input2, char &operation, float &result) {
  switch (operation) {
  case '+':
    result = input1 + input2;
    break;
  case '-':
    result = input1 - input2;
    break;
  case '*':
    result = input1 * input2;
    break;
  case '/':
    if (input2 != 0) // Sprawdzenie, czy `input2` nie jest zerem, aby zapobiec
                     // dzieleniu przez zero.
      result = input1 / input2;
    else {
      std::cerr << "Error: Division by zero!" << std::endl;
      result = std::nanf(
          ""); // Przypisanie wartości NaN (not-a-number) w przypadku błędu
    }
    break;
  default:
    std::cout << "Unknown operation!\n";
    break;
  }
}

// Funkcja `printEquation` wyświetla równanie matematyczne w formie `input1
// operation input2 = result`.
void printEquation(float &input1, float &input2, char &operation,
                   float &result) {
  std::cout << input1 << " " << operation << " " << input2 << " = " << result;
}
