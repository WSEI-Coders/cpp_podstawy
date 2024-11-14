#pragma once

#include <iostream>
#include <string>

/**
 * Klasa `Patient` przechowuje informacje o pacjencie, takie jak jego imię.
 * Klasa umożliwia ustawianie i pobieranie imienia pacjenta.
 */
class Patient {
private:
  std::string name; // Przechowuje imię pacjenta

public:
  // Konstruktor inicjalizujący imię pacjenta
  Patient(std::string input);

  // Funkcja do ustawiania imienia pacjenta
  void setName(std::string input);

  // Funkcja do pobierania imienia pacjenta
  std::string getName();
};

// Implementacja konstruktora
inline Patient::Patient(std::string input) { name = input; }

// Implementacja funkcji do ustawiania imienia pacjenta
inline void Patient::setName(std::string input) { name = input; }

// Implementacja funkcji do pobierania imienia pacjenta
inline std::string Patient::getName() { return name; }
