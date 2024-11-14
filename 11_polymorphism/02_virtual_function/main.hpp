#pragma once

#include <iostream>
#include <string>

/**
 * Klasa `Employee` reprezentuje pracownika z podstawową stawką płacy.
 * Zawiera funkcje wirtualne, umożliwiające polimorficzne wywołanie metod w
 * klasach pochodnych.
 */
class Employee {
private:
  float payRate;      // Stawka płacy
  std::string name;   // Imię pracownika (nieużywane w tym przykładzie)
  int employeeNumber; // Numer pracownika (nieużywany w tym przykładzie)

public:
  // Ustawia stawkę płacy
  void setPayRate(float rateIn);

  // Zwraca stawkę płacy
  float getPayRate();

  // Wirtualna funkcja obliczająca tygodniową pensję (może być nadpisana w
  // klasach pochodnych)
  virtual float calcWeeklyPay();
};

// Implementacja metody ustawiającej stawkę płacy
void Employee::setPayRate(float rateIn) { payRate = rateIn; }

// Implementacja metody zwracającej stawkę płacy
float Employee::getPayRate() { return payRate; }

// Implementacja domyślnej metody obliczającej tygodniową pensję (dla
// pracowników na godzinę)
float Employee::calcWeeklyPay() { return 40 * payRate; }

/**
 * Klasa `Manager` dziedziczy po `Employee` i nadpisuje metodę obliczania
 * tygodniowej pensji. Zakłada, że menedżerowie mają roczną stawkę płacy, którą
 * trzeba podzielić na 52 tygodnie.
 */
class Manager : public Employee {
public:
  // Nadpisuje metodę obliczającą tygodniową pensję, zakładając roczną stawkę
  float calcWeeklyPay() override;
};

// Implementacja metody obliczającej tygodniową pensję menedżera (podział
// rocznej płacy na 52 tygodnie)
float Manager::calcWeeklyPay() { return Employee::getPayRate() / 52; }
