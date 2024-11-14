#pragma once

#include <iostream>
#include <string>

// Klasa `Cat` reprezentuje kota z jego cechami, takimi jak imię, rasa i wiek
class Cat {
  std::string name;  // Przechowuje imię kota
  std::string breed; // Przechowuje rasę kota
  int age;           // Przechowuje wiek kota

public:
  // Metody do ustawiania wartości pól klasy
  void setName(std::string name);   // Ustawia imię kota
  void setBreed(std::string breed); // Ustawia rasę kota
  void setAge(int age);             // Ustawia wiek kota

  // Metody do pobierania wartości pól klasy
  std::string getName() const;  // Zwraca imię kota
  std::string getBreed() const; // Zwraca rasę kota
  int getAge() const;           // Zwraca wiek kota
  void printInfo() const;       // Wyświetla informacje o kocie
};

// Definicje metod klasy `Cat`

// Ustawia imię kota
void Cat::setName(std::string name) {
  this->name = name; // `this->` odnosi się do bieżącego obiektu klasy
}

// Ustawia rasę kota
void Cat::setBreed(std::string breed) {
  this->breed = breed; // `this->` odnosi się do bieżącego obiektu klasy
}

// Ustawia wiek kota
void Cat::setAge(int age) {
  this->age = age; // `this->` odnosi się do bieżącego obiektu klasy
}

// Zwraca imię kota
std::string Cat::getName() const {
  return name; // Zwraca wartość pola `name`
}

// Zwraca rasę kota
std::string Cat::getBreed() const {
  return breed; // Zwraca wartość pola `breed`
}

// Zwraca wiek kota
int Cat::getAge() const {
  return age; // Zwraca wartość pola `age`
}

// Wyświetla informacje o kocie
void Cat::printInfo() const {
  std::cout << name << " " << breed << " " << age << std::endl;
}
