#include "main.h"
#include <iostream>

const int CLASS_SIZE = 6; // Stała określająca liczbę studentów w klasie

/**
 * Funkcja główna programu
 * - Tworzy studentów i dodaje ich do kursu.
 * - Pobiera oceny studentów i oblicza statystyki kursu.
 */
int main() {
  Student studentsInClass[CLASS_SIZE]; // Tablica obiektów `Student`
  CourseEnrollment course1;            // Obiekt `CourseEnrollment`

  static int studentNumber = 10; // Zmienna przechowująca numer studenta
  int grade;

  // Ustawianie identyfikatorów studentów
  for (int i = 0; i < CLASS_SIZE; i++) {
    studentsInClass[i].setStudentID(studentNumber);
    studentNumber++;
  }

  // Pobieranie ocen od użytkownika
  for (int i = 0; i < CLASS_SIZE; i++) {
    for (int j = 0; j < 10; j++) {
      std::cin >> grade;
      studentsInClass[i].setGrade(j, grade);
    }
  }

  // Wyświetlanie ocen i statystyk dla każdego studenta
  for (int i = 0; i < CLASS_SIZE; i++) {
    studentsInClass[i].printGrades();
    std::cout << "\nMin grade = " << studentsInClass[i].getMin() << "\n";
    std::cout << "Max grade = " << studentsInClass[i].getMax() << "\n";
    std::cout << "Grade Average = " << studentsInClass[i].getAverageGrade()
              << "\n\n";
  }

  // Dodanie studentów do kursu
  course1.addStudents(studentsInClass);

  // Obliczenie statystyk dla całego kursu
  std::cout << "ALLGRADES\n";
  std::cout << "Lowest grade for entire course = " << course1.getMinGrade()
            << "\n";
  std::cout << "Highest grade for entire course = " << course1.getMaxGrade()
            << "\n";
  std::cout << "Avg grade for entire course = " << course1.getAvgGrade()
            << "\n";

  return 0;
}
