#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja dynamicznego polimorfizmu z wykorzystaniem wskaźników do klasy
 * bazowej `Employee`.
 * - Tworzenie obiektów `Employee` i `Manager` na podstawie warunku.
 */
int main() {
  const std::string status = "hourly"; // Zmienna określająca typ pracownika
  std::string level = "salary";
  Employee *e1;

  // Tworzenie obiektu klasy `Employee` lub `Manager` w zależności od wartości
  // zmiennej `status`
  if (status != level) {
    e1 = new Employee(); // Tworzenie obiektu klasy `Employee`
  } else {
    e1 = new Manager(); // Tworzenie obiektu klasy `Manager`
  }

  e1->setPayRate(12000.00); // Ustawienie stawki płacy

  std::cout << "It works!\n";
  std::cout << "e1 pay: $" << e1->calcWeeklyPay(); // Polimorficzne wywołanie
                                                   // metody `calcWeeklyPay()`

  delete e1; // Usunięcie obiektu i zwolnienie pamięci
  return 0;
}
