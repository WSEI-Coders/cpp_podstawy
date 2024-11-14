#pragma once

#include <iostream>
#include <string>

using namespace std;

/**
 * Klasa `Patient` reprezentuje pacjenta z numerem identyfikacyjnym.
 */
class Patient {
private:
  int idNumber; // Numer identyfikacyjny pacjenta

public:
  // Ustawia numer identyfikacyjny
  void setIdNumber(int idIn);

  // Zwraca numer identyfikacyjny
  int getIdNumber();
};

// Implementacja metody ustawiającej numer identyfikacyjny
void Patient::setIdNumber(int idIn) { idNumber = idIn; }

// Implementacja metody zwracającej numer identyfikacyjny
int Patient::getIdNumber() { return idNumber; }

/**
 * Klasa `Dog` reprezentuje psa z informacją o rasie.
 */
class Dog {
private:
  string breed; // Rasa psa

public:
  // Ustawia rasę psa
  void setBreed(string breedIn);

  // Zwraca rasę psa
  string getBreed();
};

// Implementacja metody ustawiającej rasę psa
void Dog::setBreed(string breedIn) { breed = breedIn; }

// Implementacja metody zwracającej rasę psa
string Dog::getBreed() { return breed; }

/**
 * Klasa `Pet` reprezentuje zwierzę będące jednocześnie pacjentem i psem.
 * Dziedziczy właściwości i metody z klas `Patient` i `Dog`.
 */
class Pet : public Patient, public Dog {
private:
  string name; // Imię zwierzęcia

public:
  // Konstruktor domyślny ustawiający imię na "NA"
  Pet();

  // Ustawia imię zwierzęcia
  void setName(string nameIn);

  // Zwraca imię zwierzęcia
  string getName();
};

// Implementacja konstruktora domyślnego
inline Pet::Pet() { name = "NA"; }

// Implementacja metody ustawiającej imię zwierzęcia
inline void Pet::setName(string nameIn) { name = nameIn; }

// Implementacja metody zwracającej imię zwierzęcia
inline string Pet::getName() { return name; }
