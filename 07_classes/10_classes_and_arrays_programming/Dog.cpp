#pragma once

#include <iostream>
#include <string>

/**
 * Klasa `Dog` przechowuje dane o psie, takie jak imię i numer licencji.
 * Klasa zawiera metody do ustawiania i pobierania wartości oraz wyświetlania
 * informacji o psie.
 */
class Dog {
  std::string name;  // Imię psa
  int licenseNumber; // Numer licencji psa

public:
  Dog(); // Konstruktor domyślny

  // Funkcje do ustawiania i pobierania wartości
  void setName(std::string nameIn);
  void setLicenseNumber(int licenseNumberIn);
  std::string getName();
  int getLicenseNumber();
  void printInfo();
};

// Definicje funkcji inline

inline Dog::Dog() {
  name = "Unknown"; // Inicjalizacja imienia na "Unknown"
}

inline void Dog::setName(std::string nameIn) { name = nameIn; }

inline void Dog::setLicenseNumber(int licenseNumberIn) {
  licenseNumber = licenseNumberIn;
}

inline std::string Dog::getName() { return name; }

inline int Dog::getLicenseNumber() { return licenseNumber; }

inline void Dog::printInfo() { std::cout << name << " " << licenseNumber; }
