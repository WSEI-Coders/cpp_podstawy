#include "main.hpp"

int main() {
  // Tworzenie obiektu `d2` klasy `Dog` z numerem licencji 666666
  Dog d2(666666);

  // Wyświetlenie numeru licencji psa `d2`
  std::cout << d2.getLicense();

  return 0; // Zakończenie programu
}
