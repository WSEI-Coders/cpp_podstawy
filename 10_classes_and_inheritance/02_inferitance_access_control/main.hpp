#pragma once

#include <iostream>
#include <string>

/**
 * Klasa bazowa `Student` reprezentuje ucznia z unikalnym identyfikatorem.
 */
class Student {
private:
  int id; // Identyfikator ucznia

public:
  // Konstruktor domyślny ustawiający identyfikator na 0
  Student();

  // Metoda do ustawiania identyfikatora ucznia
  void setId(int idIn);

  // Metoda do pobierania identyfikatora ucznia
  int getId();
};

// Implementacja konstruktora domyślnego
Student::Student() { id = 0; }

// Implementacja metody ustawiającej identyfikator ucznia
void Student::setId(int idIn) { id = idIn; }

// Implementacja metody zwracającej identyfikator ucznia
int Student::getId() { return id; }

/**
 * Klasa pochodna `GradStudent` dziedziczy prywatnie po klasie `Student`.
 * Zawiera dodatkowe informacje o stopniu naukowym.
 */
class GradStudent : private Student {
private:
  std::string degree; // Stopień naukowy

public:
  // Konstruktor domyślny ustawiający stopień na "undelcared"
  GradStudent();

  // Metoda do ustawiania stopnia naukowego
  void setDegree(std::string degreeIn);

  // Metoda do pobierania stopnia naukowego
  std::string getDegree();

  // Metody do ustawiania i pobierania identyfikatora ucznia z klasy bazowej
  // `Student`
  void setStudentId(int idIn);
  int getStudentId();
};

// Implementacja konstruktora domyślnego
GradStudent::GradStudent() { degree = "undelcared"; }

// Implementacja metod dostępu do identyfikatora ucznia z klasy `Student`
int GradStudent::getStudentId() { return Student::getId(); }

void GradStudent::setStudentId(int idIn) { Student::setId(idIn); }

// Implementacja metody ustawiającej stopień naukowy
void GradStudent::setDegree(std::string degreeIn) { degree = degreeIn; }

// Implementacja metody zwracającej stopień naukowy
std::string GradStudent::getDegree() { return degree; }
