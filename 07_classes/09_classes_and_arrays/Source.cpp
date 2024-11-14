#include "main.hpp"

int main() {
  const int SIZE = 3; // Liczba studentów w kursie

  // Tablica obiektów `Student`
  Student course1[SIZE];

  // Ustawianie identyfikatorów dla każdego studenta
  course1[0].setId(1000);
  course1[1].setId(1111);
  course1[2].setId(2222);

  // Ustawianie ocen dla każdego studenta
  course1[0].setGrade(0, 83);
  course1[1].setGrade(0, 95);
  course1[2].setGrade(0, 72);

  course1[0].setGrade(1, 87);
  course1[1].setGrade(1, 52);
  course1[2].setGrade(1, 70);

  course1[0].setGrade(2, 90);
  course1[1].setGrade(2, 85);
  course1[2].setGrade(2, 82);

  // Wyświetlanie informacji o każdym studencie
  for (int i = 0; i < SIZE; i++) {
    course1[i].printInfo();
    std::cout << "\n\n";
  }

  return 0;
}
