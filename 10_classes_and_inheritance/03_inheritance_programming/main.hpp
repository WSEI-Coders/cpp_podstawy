#pragma once

#include <iostream>
#include <string>

/**
 * Klasa bazowa `Flower` reprezentuje kwiat z informacją o jego czasie
 * kwitnienia.
 */
class Flower {
private:
  std::string bloomTime; // Czas kwitnienia kwiatu

public:
  // Konstruktor domyślny ustawiający czas kwitnienia na "NA" (niedostępny)
  Flower();

  // Ustawia czas kwitnienia
  void setBloomTime(std::string bloomIn);

  // Zwraca czas kwitnienia
  std::string getBloomTime();
};

// Implementacja konstruktora domyślnego
Flower::Flower() { bloomTime = "NA"; }

// Implementacja metody ustawiającej czas kwitnienia
void Flower::setBloomTime(std::string bloomIn) { bloomTime = bloomIn; }

// Implementacja metody zwracającej czas kwitnienia
std::string Flower::getBloomTime() { return bloomTime; }

/**
 * Klasa pochodna `Rose` dziedziczy po klasie `Flower` i dodaje informacje o
 * zapachu róży.
 */
class Rose : public Flower {
private:
  std::string fragrance; // Zapach róży

public:
  // Konstruktor domyślny ustawiający zapach na "NA" (niedostępny)
  Rose();

  // Ustawia zapach róży
  void setFragrance(std::string fragIn);

  // Zwraca zapach róży
  std::string getFragrance();
};

// Implementacja konstruktora domyślnego
Rose::Rose() { fragrance = "NA"; }

// Implementacja metody ustawiającej zapach róży
void Rose::setFragrance(std::string fragIn) { fragrance = fragIn; }

// Implementacja metody zwracającej zapach róży
std::string Rose::getFragrance() { return fragrance; }
