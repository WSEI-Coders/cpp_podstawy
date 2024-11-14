#pragma once

#include <iostream>
#include <string>

/**
 * Klasa `Staff` reprezentuje pracownika z tytułem stanowiska.
 */
class Staff {
private:
  std::string title; // Tytuł stanowiska pracownika

public:
  // Konstruktor domyślny ustawiający tytuł na "NA" (niedostępny)
  Staff();

  // Ustawia tytuł stanowiska
  void setTitle(std::string input);

  // Zwraca tytuł stanowiska
  std::string getTitle();
};

// Implementacja konstruktora domyślnego
Staff::Staff() { title = "NA"; }

// Implementacja metody ustawiającej tytuł stanowiska
void Staff::setTitle(std::string input) { title = input; }

// Implementacja metody zwracającej tytuł stanowiska
std::string Staff::getTitle() { return title; }

/**
 * Klasa `GradStudent` reprezentuje studenta z identyfikatorem.
 */
class GradStudent {
private:
  int studentId; // Identyfikator studenta

public:
  // Konstruktor domyślny ustawiający identyfikator na 0
  GradStudent();

  // Ustawia identyfikator studenta
  void setId(int input);

  // Zwraca identyfikator studenta
  int getId();
};

// Implementacja konstruktora domyślnego
GradStudent::GradStudent() { studentId = 0; }

// Implementacja metody ustawiającej identyfikator studenta
void GradStudent::setId(int input) { studentId = input; }

// Implementacja metody zwracającej identyfikator studenta
int GradStudent::getId() { return studentId; }

/**
 * Klasa `TA` (Teaching Assistant) dziedziczy po klasach `Staff` i
 * `GradStudent`. Reprezentuje asystenta, który pełni funkcję pracownika i
 * studenta jednocześnie.
 */
class TA : public Staff, public GradStudent {
private:
  std::string supervisor; // Nazwisko i imię opiekuna

public:
  // Konstruktor domyślny ustawiający nazwisko opiekuna na "NA"
  TA();

  // Ustawia nazwisko opiekuna
  void setSupervisor(std::string input);

  // Zwraca nazwisko opiekuna
  std::string getSupervisor();
};

// Implementacja konstruktora domyślnego
TA::TA() { supervisor = "NA"; }

// Implementacja metody ustawiającej nazwisko opiekuna
void TA::setSupervisor(std::string input) { supervisor = input; }

// Implementacja metody zwracającej nazwisko opiekuna
std::string TA::getSupervisor() { return supervisor; }
