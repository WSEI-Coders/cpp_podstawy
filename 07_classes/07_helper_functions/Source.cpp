#include "main.hpp"

int main() {
  // Tworzenie obiektu `Student` i ustawianie wartości
  Student s1;
  s1.setId(3232);     // Ustawienie identyfikatora
  s1.setGrade(0, 85); // Ustawienie ocen
  s1.setGrade(1, 80);
  s1.setGrade(2, 98);
  s1.setGrade(3, 65);
  s1.setGrade(4, 90);

  // Wyświetlanie informacji o studencie i obliczanie średniej
  s1.printInfo();
  std::cout << "Average grade = " << s1.getAvg() << std::endl;

  return 0;
}
