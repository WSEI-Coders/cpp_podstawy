#pragma once

#include <iostream>

/**
 * Klasa szablonowa `StudentRecord` przechowuje dane dotyczące ucznia, takie jak
 * identyfikator ucznia (`studentId`) i ocenę (`grade`). Dzięki zastosowaniu
 * szablonów klasa może obsługiwać różne typy ocen, np. `int`, `char`, `float`,
 * `std::string`.
 */
template <class T> class StudentRecord {
private:
  const int size = 5; // Stała wartość `size`, obecnie nie używana
  T grade;            // Ocena ucznia dowolnego typu `T`
  int studentId;      // Identyfikator ucznia

public:
  // Konstruktor przyjmujący ocenę jako argument
  StudentRecord(T input);

  // Ustawia identyfikator ucznia
  void setId(int idIn);

  // Wyświetla identyfikator i ocenę ucznia
  void printGrades();
};

// Implementacja konstruktora klasy szablonowej
template <class T> StudentRecord<T>::StudentRecord(T input) { grade = input; }

// Implementacja funkcji ustawiającej identyfikator ucznia
template <class T> void StudentRecord<T>::setId(int idIn) { studentId = idIn; }

// Implementacja funkcji wyświetlającej identyfikator i ocenę ucznia
template <class T> void StudentRecord<T>::printGrades() {
  std::cout << "ID# " << studentId << ": ";
  std::cout << grade << "\n";
  std::cout << "\n";
}
