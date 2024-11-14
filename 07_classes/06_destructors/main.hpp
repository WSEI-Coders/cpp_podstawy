#pragma once

#include <iostream>

// Klasa `Dog` reprezentuje psa z numerem licencji
class Dog {
private:
  int license; // Przechowuje numer licencji psa
public:
  // Konstruktor domyślny
  Dog();
  // Konstruktor z parametrem
  Dog(int licenseIn);
  // Metoda ustawiająca numer licencji
  void setLicense(int licenseIn);
  // Metoda pobierająca numer licencji
  int getLicense();
  // Destruktor
  ~Dog();
};

// Definicja konstruktora domyślnego
Dog::Dog() {
  license = 0; // Ustawienie wartości początkowej numeru licencji na 0
}

// Definicja destruktora
Dog::~Dog() {
  std::cout
      << "\nDeleting the dog"; // Informacja wyświetlana przy usuwaniu obiektu
}

// Definicja konstruktora z parametrem
Dog::Dog(int licenseIn) {
  license = licenseIn; // Ustawienie numeru licencji na wartość przekazaną jako
                       // argument
}

// Definicja metody `setLicense`, która ustawia numer licencji
void Dog::setLicense(int licenseIn) { license = licenseIn; }

// Definicja metody `getLicense`, która zwraca numer licencji
int Dog::getLicense() { return license; }
