#include "main.hpp"

int main() {
  // Tworzenie obiektów `cat1` i `cat2` klasy `Cat`
  Cat cat1, cat2;

  // Ustawienie danych dla obiektu `cat1`
  cat1.setName("Kimmy");
  cat1.setBreed("calico");
  cat1.setAge(4);

  // Ustawienie danych dla obiektu `cat2`
  cat2.setName("Bobby");
  cat2.setBreed("main coon");
  cat2.setAge(1);

  // Wyświetlenie informacji o `cat1` i `cat2` za pomocą metody `printInfo()`
  cat1.printInfo();
  std::cout << "\n";
  cat2.printInfo();
  std::cout << "\n\n";

  // Alternatywna metoda wyświetlania danych poprzez użycie metod `get`
  std::cout << cat1.getName() << " " << cat1.getBreed() << " " << cat1.getAge()
            << "\n";
  std::cout << cat2.getName() << " " << cat2.getBreed() << " " << cat2.getAge()
            << "\n";

  return 0;
}
