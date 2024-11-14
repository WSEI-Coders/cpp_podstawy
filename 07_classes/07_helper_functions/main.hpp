#pragma once

#include <iostream>

/**
 * Klasa `Student` przechowuje informacje o studencie, takie jak jego
 * identyfikator i oceny. Klasa umożliwia ustawianie i pobieranie ocen oraz
 * obliczanie średniej ocen.
 */
class Student {
  int grade[5]; // Tablica przechowująca 5 ocen studenta
  int id;       // Identyfikator studenta

public:
  Student(); // Konstruktor domyślny

  // Funkcje do ustawiania i pobierania identyfikatora studenta
  void setId(int idin);
  int getId();

  // Funkcje do ustawiania i pobierania ocen studenta
  void setGrade(int index, int gradeIn);
  int getGrade(int index);

  // Funkcja do obliczania średniej ocen
  float getAvg();

  // Funkcja do wyświetlania informacji o studencie
  void printInfo();
};

// Definicje funkcji członkowskich klasy `Student`

// Konstruktor domyślny inicjalizujący wszystkie oceny na 0 i `id` na 0
Student::Student() {
  for (int i = 0; i < 5; i++) {
    grade[i] = 0;
  }
  id = 0;
}

// Ustawianie identyfikatora studenta
void Student::setId(int idin) { id = idin; }

// Ustawianie oceny w danym indeksie
void Student::setGrade(int index, int gradeIn) { grade[index] = gradeIn; }

// Pobieranie identyfikatora studenta
int Student::getId() { return id; }

// Pobieranie oceny na podstawie indeksu
int Student::getGrade(int index) { return grade[index]; }

// Obliczanie średniej ocen
float Student::getAvg() {
  int sum = 0;
  for (int i = 0; i < 5; i++)
    sum += grade[i];
  return sum / 5.0f; // Użycie dzielenia zmiennoprzecinkowego
}

// Wyświetlanie informacji o studencie
void Student::printInfo() {
  std::cout << "ID: " << id << "\nGrades: ";
  for (int i = 0; i < 5; i++)
    std::cout << grade[i] << " ";
  std::cout << std::endl;
}
