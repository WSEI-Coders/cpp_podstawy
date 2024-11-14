#include "main.hpp"

/**
 * Funkcja główna programu
 * - Tworzenie obiektów klasy `Employee` i `Manager`.
 * - Ustawianie stawki płacy i obliczanie tygodniowej pensji.
 */
int main() {
  Employee e1;          // Tworzenie obiektu klasy `Employee`
  e1.setPayRate(10.00); // Ustawienie stawki godzinowej na $10

  Manager m1;              // Tworzenie obiektu klasy `Manager`
  m1.setPayRate(12000.00); // Ustawienie rocznej stawki płacy na $12,000

  // Wyświetlanie tygodniowej pensji dla pracownika i menedżera
  std::cout << "e1 pay: $" << e1.calcWeeklyPay();
  std::cout << "\nm1 pay: $" << m1.calcWeeklyPay();

  return 0;
}
