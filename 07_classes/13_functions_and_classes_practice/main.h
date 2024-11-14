#pragma once

#include <algorithm>
#include <iostream>
#include <numeric>

/**
 * Klasa `Student` reprezentuje studenta z identyfikatorem i 10 ocenami.
 * Klasa umożliwia ustawianie i pobieranie ocen, sortowanie oraz obliczanie
 * statystyk ocen.
 */
class Student {
  int studentID;  // Identyfikator studenta
  int grades[10]; // Tablica 10 ocen

public:
  Student(int classSize = 10);          // Konstruktor
  void setStudentID(int studentNumber); // Ustawienie identyfikatora studenta
  void setGrade(int gradeNumber, int gradeIn); // Ustawienie oceny
  void printGrades();                          // Wyświetlenie ocen
  int getMin();                                // Pobranie minimalnej oceny
  int getMax();                                // Pobranie maksymalnej oceny
  void sortGrades();                           // Sortowanie ocen
  double getAverageGrade();                    // Obliczanie średniej ocen
  int getGrade(int i); // Pobranie oceny z podanego indeksu
};

// Implementacja funkcji `Student` inline

inline Student::Student(int classSize) {
  // Niepotrzebna deklaracja tablicy; tablica `grades` jest już zadeklarowana
}

inline void Student::setStudentID(int studentNumber) {
  studentID = studentNumber;
}

inline void Student::setGrade(int gradeNumber, int gradeIn) {
  grades[gradeNumber] = gradeIn;
}

inline void Student::printGrades() {
  std::cout << "Student ID = " << studentID << std::endl;
  for (int i{0}; i < std::size(grades); ++i)
    std::cout << grades[i] << std::endl;
}

inline void Student::sortGrades() {
  std::sort(std::begin(grades), std::end(grades), std::greater<int>());
}

inline int Student::getMin() {
  sortGrades();
  return grades[9];
}

inline int Student::getMax() {
  sortGrades();
  return grades[0];
}

inline double Student::getAverageGrade() {
  return (std::accumulate(std::begin(grades), std::end(grades), 0) / 10.0);
}

inline int Student::getGrade(int i) { return grades[i]; }

/**
 * Klasa `CourseEnrollment` reprezentuje kurs z 6 studentami.
 * Klasa umożliwia obliczanie statystyk ocen dla całego kursu.
 */
class CourseEnrollment {
public:
  Student students[6];         // Tablica 6 studentów
  int grades[60];              // Tablica wszystkich ocen studentów kursu
  void addStudents(Student *); // Dodanie studentów do kursu

  int *getAllGrades();   // Pobranie wszystkich ocen
  int *sortAllGrades();  // Sortowanie wszystkich ocen
  int getMinGrade();     // Pobranie minimalnej oceny dla całego kursu
  int getMaxGrade();     // Pobranie maksymalnej oceny dla całego kursu
  float getAvgGrade();   // Obliczenie średniej oceny dla całego kursu
  void printAllGrades(); // Wyświetlenie wszystkich ocen
};

// Implementacja funkcji `CourseEnrollment` inline

inline void CourseEnrollment::addStudents(Student *student) {
  for (int i{0}; i < 6; ++i)
    students[i] = student[i];
}

inline int *CourseEnrollment::getAllGrades() {
  int k = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 10; j++) {
      grades[k] = students[i].getGrade(j);
      k++;
    }
  }
  return grades;
}

inline int *CourseEnrollment::sortAllGrades() {
  for (int i = 0; i < 60; i++) {
    for (int j = 0; j < 59 - i; j++) {
      if (grades[j] > grades[j + 1]) {
        int temp = grades[j];
        grades[j] = grades[j + 1];
        grades[j + 1] = temp;
      }
    }
  }
  return grades;
}

inline int CourseEnrollment::getMinGrade() {
  sortAllGrades();
  return grades[0];
}

inline int CourseEnrollment::getMaxGrade() {
  sortAllGrades();
  return grades[59];
}

inline float CourseEnrollment::getAvgGrade() {
  int sum = std::accumulate(std::begin(grades), std::end(grades), 0);
  return sum / 60.0;
}

inline void CourseEnrollment::printAllGrades() {
  for (int i = 0; i < 60; i++) {
    std::cout << "grade = " << grades[i] << "\n";
  }
}
