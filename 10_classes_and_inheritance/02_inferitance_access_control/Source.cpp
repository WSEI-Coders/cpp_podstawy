#include "main.hpp"

/**
 * Funkcja główna programu
 * - Demonstracja użycia klasy `GradStudent`, która dziedziczy prywatnie po
 * `Student`.
 * - Pokazuje, jak można uzyskać dostęp do danych klasy bazowej przy użyciu
 * metod klasy pochodnej.
 */
int main() {
  GradStudent gs1; // Tworzenie obiektu klasy `GradStudent`

  // Ustawienie identyfikatora i stopnia naukowego
  gs1.setStudentId(123456789);
  gs1.setDegree("BSEE");

  // Wyświetlanie identyfikatora i stopnia naukowego
  std::cout << gs1.getStudentId() << " " << gs1.getDegree();
  return 0;
}
