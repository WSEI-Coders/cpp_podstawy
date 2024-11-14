#pragma once

#include <iostream>
#include <string>

/**
 * Klasa `Employee` reprezentuje pracownika z informacją o stawce płacy, imieniu
 * i numerze pracownika. Oferuje metody do ustawiania stawki płacy i obliczania
 * tygodniowej pensji.
 */
class Employee {
private:
  float payRate;      // Stawka płacy pracownika (na godzinę lub roczna)
  std::string name;   // Imię pracownika (nieużywane w tym przykładzie)
  int employeeNumber; // Numer identyfikacyjny pracownika (nieużywany w tym
                      // przykładzie)

public:
  // Ustawia stawkę płacy pracownika
  void setPayRate(float rateIn);

  // Zwraca stawkę płacy pracownika
  float getPayRate();

  // Oblicza tygodniową pensję zakładając 40 godzin pracy w tygodniu
  float calcWeeklyPay();
};

// Implementacja metody ustawiającej stawkę płacy
void Employee::setPayRate(float rateIn) { payRate = rateIn; }

// Implementacja metody zwracającej stawkę płacy
float Employee::getPayRate() { return payRate; }

// Implementacja metody obliczającej tygodniową pensję (zakładając 40 godzin
// pracy tygodniowo)
float Employee::calcWeeklyPay() { return 40 * payRate; }

/**
 * Klasa `Manager` dziedziczy po `Employee` i nadpisuje metodę obliczania
 * tygodniowej pensji. Zakłada, że menedżerowie mają stałą roczną stawkę, którą
 * trzeba podzielić na 52 tygodnie.
 */
class Manager : public Employee {
public:
  // Nadpisuje metodę obliczania tygodniowej pensji, zakładając roczną stawkę
  float calcWeeklyPay();
};

// Implementacja metody obliczającej tygodniową pensję menedżera
float Manager::calcWeeklyPay() { return Employee::getPayRate() / 52; }
