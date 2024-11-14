#pragma once

#include <iostream>
#include <string>

// Klasa `Cats` reprezentuje kota z jego cechami, takimi jak imię, rasa i wiek
class Cats {
  std::string name;  // Przechowuje imię kota
  std::string breed; // Przechowuje rasę kota
  int age;           // Przechowuje wiek kota

public:
  // Konstruktor domyślny
  Cats();

  // Deklaracje metod ustawiających wartości pól klasy
  void setName(std::string name);
  void setBreed(std::string breed);
  void setAge(int age);

  // Deklaracje metod pobierających wartości pól klasy
  std::string getName() const;
  std::string getBreed() const;
  int getAge() const;
  void printInfo() const; // Metoda wyświetlająca informacje o kocie
};

// Definicje metod klasy `Cats`

// Konstruktor domyślny klasy `Cats`
Cats::Cats() {
  std::cout << "Assigning initial values in the constructor\n";
  name = "Unknown";  // Przypisanie wartości początkowej dla imienia
  breed = "Unknown"; // Przypisanie wartości początkowej dla rasy
  age = 99;          // Przypisanie wartości początkowej dla wieku
}

// Definicje metod ustawiających wartości pól klasy
void Cats::setName(std::string name) {
  this->name = name; // `this->` odnosi się do bieżącego obiektu klasy
}

void Cats::setBreed(std::string breed) { this->breed = breed; }

void Cats::setAge(int age) { this->age = age; }

// Definicje metod pobierających wartości pól klasy
std::string Cats::getName() const { return name; }

std::string Cats::getBreed() const { return breed; }

int Cats::getAge() const { return age; }

// Definicja metody wyświetlającej informacje o kocie
void Cats::printInfo() const {
  std::cout << name << " " << breed << " " << age << std::endl;
}
