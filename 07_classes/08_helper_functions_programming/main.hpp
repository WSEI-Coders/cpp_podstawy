#pragma once

#include <iomanip>
#include <iostream>

/**
 * Klasa `Gameboard` reprezentuje planszę do gry 4x4
 *
 * Opis:
 * - Plansza jest reprezentowana jako dwuwymiarowa tablica znaków `gameSpace`.
 * - Klasa umożliwia ustawianie wartości na planszy, pobieranie wartości,
 * sprawdzanie obecności czterech `x` w rzędzie oraz wyświetlanie planszy.
 */
class Gameboard {
  char gameSpace[4]
                [4]; // Dwuwymiarowa tablica 4x4 przechowująca wartości planszy
public:
  Gameboard(); // Konstruktor domyślny
  void setGameSpace(int row, int column,
                    char value);          // Ustawienie wartości na planszy
  char getGameSpace(int row, int column); // Pobranie wartości z planszy
  int fourInRow(); // Sprawdzenie, czy cztery `x` znajdują się w jednym rzędzie
  void printInfo(); // Wyświetlenie stanu planszy
};

// Implementacja funkcji członkowskich klasy `Gameboard`

// Konstruktor domyślny inicjalizujący planszę wartościami '-'
Gameboard::Gameboard() {
  for (int row{0}; row < 4; ++row) {
    for (int column{0}; column < 4; ++column) {
      gameSpace[row][column] = '-';
    }
  }
}

// Ustawienie wartości w określonej pozycji na planszy
void Gameboard::setGameSpace(int row, int column, char value) {
  gameSpace[row][column] = value;
}

// Pobranie wartości z określonej pozycji na planszy
char Gameboard::getGameSpace(int row, int column) {
  return gameSpace[row][column];
}

// Sprawdzenie, czy cztery `x` znajdują się w jednym rzędzie
int Gameboard::fourInRow() {
  for (int row{0}; row < 4; ++row) {
    int sum{0};
    for (int column{0}; column < 4; ++column) {
      if (gameSpace[row][column] == 'x')
        sum++;
    }
    if (sum == 4) // Jeśli w danym rzędzie są cztery `x`, zwróć 1
      return 1;
  }
  return 0; // Brak czterech `x` w żadnym rzędzie
}

// Wyświetlenie planszy
void Gameboard::printInfo() {
  for (int row{0}; row < 4; ++row) {
    for (int column{0}; column < 4; ++column) {
      std::cout << gameSpace[row][column] << " ";
    }
    std::cout << std::endl;
  }
}
