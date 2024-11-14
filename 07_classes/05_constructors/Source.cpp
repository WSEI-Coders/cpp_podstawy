#include "main.hpp"

int main() {
  // Tworzenie obiektu `cat1` klasy `Cats` z użyciem konstruktora domyślnego
  Cats cat1;

  // Wyświetlenie początkowych informacji o obiekcie `cat1`
  std::cout << "Cat1 information: ";
  cat1.printInfo();

  return 0; // Zakończenie programu
}
