#include "main.hpp"

/**
 * Funkcja główna programu
 * - Tworzy obiekty klasy `Cat` i `Dog`.
 * - Wywołuje metodę `makeSound()` dla każdego obiektu.
 */
int main() {
  // Tworzenie obiektu klasy `Cat`
  Cat c1("Polly");

  // Tworzenie obiektu klasy `Dog`
  Dog d1("Spot");

  // Wywoływanie metody `makeSound()` dla każdego zwierzęcia
  c1.makeSound();
  d1.makeSound();

  return 0;
}
