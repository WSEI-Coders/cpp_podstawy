#pragma once

#include <iostream>
#include <string>

// Klasa `Dog` reprezentuje psa z nazwą i numerem licencji
class Dog {
  std::string name;  // Przechowuje imię psa
  int licenseNumber; // Przechowuje numer licencji psa
public:
  // Deklaracje metod ustawiających i pobierających wartości pól klasy
  void setName(std::string nameIn);           // Ustawia nazwę psa
  void setLicenseNumber(int licenseNumberIn); // Ustawia numer licencji
  std::string getName();                      // Zwraca nazwę psa
  int getLicenseNumber();                     // Zwraca numer licencji
  void printInfo();                           // Wyświetla informacje o psie
};

// Definicja metody `setName`, która ustawia nazwę psa
void Dog::setName(std::string nameIn) {
  name = nameIn; // Przypisanie wartości do pola `name`
}

// Definicja metody `setLicenseNumber`, która ustawia numer licencji
void Dog::setLicenseNumber(int licenseNumberIn) {
  licenseNumber =
      licenseNumberIn; // Przypisanie wartości do pola `licenseNumber`
}

// Definicja metody `getName`, która zwraca nazwę psa
std::string Dog::getName() {
  return name; // Zwraca wartość pola `name`
}

// Definicja metody `getLicenseNumber`, która zwraca numer licencji
int Dog::getLicenseNumber() {
  return licenseNumber; // Zwraca wartość pola `licenseNumber`
}

// Definicja metody `printInfo`, która wyświetla informacje o psie
void Dog::printInfo() {
  std::cout << "Name: " << name << ", the license # " << licenseNumber
            << std::endl;
}
