/**
 * Przykład użycia funkcji w C++
 *
 * Opis:
 * - Funkcje w C++ to bloki kodu, które można wywoływać w celu wykonania
 * określonego zadania.
 * - Funkcja `main()` jest specjalną funkcją, od której rozpoczyna się wykonanie
 * programu.
 * - Program zawiera funkcję `print_message()`, która wyświetla komunikat.
 *
 * Składnia funkcji w C++:
 * - Deklaracja funkcji: mówi, jak wywoływać funkcję (nagłówek funkcji).
 * - Definicja funkcji: zawiera instrukcje, które mają być wykonane, gdy funkcja
 * zostanie wywołana.
 */

#include <iostream>

// Deklaracja funkcji `print_message()`
void print_message(); // Funkcja nie przyjmuje parametrów i nie zwraca wartości
                      // (`void`)

// Funkcja `main()` - punkt wejściowy programu
int main() {
  // Wywołanie funkcji `print_message()`
  print_message();
  return 0;
}

// Definicja funkcji `print_message()`
void print_message() {
  // Wyświetlenie komunikatu
  std::cout << "HEY! I'm from a function!";
}
