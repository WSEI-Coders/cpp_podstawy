#pragma once

#include <iostream>
#include <string>

/**
 * Klasa bazowa `Student` przechowuje podstawowe informacje o uczniu, takie jak
 * identyfikator.
 */
class Student {
private:
  int id; // Identyfikator ucznia

public:
  // Konstruktor domyślny ustawiający id na 0
  Student();

  // Ustawia identyfikator ucznia
  void setId(int idIn);

  // Zwraca identyfikator ucznia
  int getId();
};

// Implementacja konstruktora domyślnego
Student::Student() { id = 0; }

// Implementacja funkcji ustawiającej identyfikator ucznia
void Student::setId(int idIn) { id = idIn; }

// Implementacja funkcji zwracającej identyfikator ucznia
int Student::getId() { return id; }

/**
 * Klasa pochodna `GradStudent` dziedziczy po klasie `Student` i dodaje
 * dodatkowe informacje o stopniu naukowym.
 */
class GradStudent : public Student {
private:
  std::string degree; // Stopień naukowy

public:
  // Konstruktor domyślny ustawiający stopień na "undelcared"
  GradStudent();

  // Ustawia stopień naukowy
  void setDegree(std::string degreeIn);

  // Zwraca stopień naukowy
  std::string getDegree();
};

// Implementacja konstruktora domyślnego
GradStudent::GradStudent() { degree = "undelcared"; }

// Implementacja funkcji ustawiającej stopień naukowy
void GradStudent::setDegree(std::string degreeIn) { degree = degreeIn; }

// Implementacja funkcji zwracającej stopień naukowy
std::string GradStudent::getDegree() { return degree; }
