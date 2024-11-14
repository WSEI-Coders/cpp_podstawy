#pragma once

#include <iostream>
#include <string>

/**
 * Klasa `Dog` reprezentuje psa z imieniem i numerem licencji.
 * Klasa zapewnia różne konstruktory do tworzenia obiektów `Dog` z różnymi
 * danymi wejściowymi.
 */
class Dog {
private:
  std::string name; // Imię psa
  int license;      // Numer licencji psa

public:
  // Konstruktor domyślny
  Dog();

  // Konstruktor ustawiający tylko imię
  Dog(std::string nameIn);

  // Konstruktor ustawiający tylko numer licencji
  Dog(int licenseIn);

  // Konstruktor ustawiający zarówno imię, jak i numer licencji
  Dog(std::string nameIn, int licenseIn);

  // Funkcja zwracająca imię psa
  std::string getName();

  // Funkcja zwracająca numer licencji psa
  int getLicense();
};

// Implementacja konstruktora domyślnego
inline Dog::Dog() {
  name = "NA"; // Domyślne imię "NA"
  license = 0; // Domyślny numer licencji 0
}

// Implementacja konstruktora ustawiającego tylko imię
inline Dog::Dog(std::string nameIn) : name{nameIn} {
  license = 0; // Domyślny numer licencji 0
}

// Implementacja konstruktora ustawiającego tylko numer licencji
inline Dog::Dog(int licenseIn) : license{licenseIn} {
  name = "NA"; // Domyślne imię "NA"
}

// Implementacja konstruktora ustawiającego zarówno imię, jak i numer licencji
inline Dog::Dog(std::string nameIn, int licenseIn)
    : name{nameIn}, license{licenseIn} {}

// Implementacja funkcji zwracającej imię psa
inline std::string Dog::getName() { return name; }

// Implementacja funkcji zwracającej numer licencji psa
inline int Dog::getLicense() { return license; }
