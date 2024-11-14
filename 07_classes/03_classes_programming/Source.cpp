#include "main.hpp"

int main() {
  // Tworzenie obiektu `dog1` klasy `Dog` i ustawianie jego danych
  Dog dog1;
  dog1.setName("Trixie");      // Ustawienie nazwy psa
  dog1.setLicenseNumber(1234); // Ustawienie numeru licencji

  // Tworzenie obiektu `dog2` klasy `Dog` i ustawianie jego danych
  Dog dog2;
  dog2.setName("Kali");        // Ustawienie nazwy psa
  dog2.setLicenseNumber(5678); // Ustawienie numeru licencji

  // Wyświetlanie informacji o psach
  dog1.printInfo(); // Wywołanie metody `printInfo()` dla obiektu `dog1`
  dog2.printInfo(); // Wywołanie metody `printInfo()` dla obiektu `dog2`

  return 0;
}
