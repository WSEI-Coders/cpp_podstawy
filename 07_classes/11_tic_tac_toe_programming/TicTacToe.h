#pragma once

#include <iostream>
#include <string>

/**
 * Klasa `Game` reprezentuje grę Tic Tac Toe na planszy 4x4.
 * Klasa pozwala na ustawianie pozycji, drukowanie planszy, sprawdzanie
 * zwycięzcy oraz kończenie gry.
 */
class Game {
  char board[4][4]{}; // Plansza gry
  std::string player_name;
  char winner;
  bool is_end;
  int moves;

  // Metody prywatne do sprawdzania zwycięzcy
  char checkRows();
  char checkCols();
  char checkDiagonals();
  char checkWinner();

public:
  Game();
  void setPosition(int r, int c, char player); // Ustawienie pozycji na planszy
  void printBoard();                           // Drukowanie planszy
  std::string whoIsWinner();                   // Określenie zwycięzcy
  bool endGame();                              // Sprawdzenie końca gry
};

// Implementacja metod inline klasy `Game`

// Konstruktor inicjalizujący planszę
inline Game::Game() {
  is_end = false;
  moves = 0;
  winner = '-';
  for (int i{0}; i < 4; ++i) {
    for (int j{0}; j < 4; ++j)
      board[i][j] = '-';
  }
}

// Ustawienie pozycji na planszy
inline void Game::setPosition(int r, int c, char player) {
  while (true) {
    if (board[r][c] == '-') {
      board[r][c] = player;
      moves++;
      break;
    }

    std::cout << "This position is used!\n";
    std::cout << "Enter new row and column: ";
    std::cin >> r >> c;
  }
}

// Drukowanie planszy
inline void Game::printBoard() {
  for (int i{0}; i < 4; ++i) {
    for (int j{0}; j < 4; ++j) {
      std::cout << board[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

// Sprawdzenie wierszy w poszukiwaniu czterech `x` lub `o`
inline char Game::checkRows() {
  for (int i{0}; i < 4; ++i) {
    int fourInRowX{0};
    int fourInRowO{0};
    for (int j{0}; j < 4; ++j) {
      if (board[i][j] == '-')
        break;
      if (board[i][j] == 'x')
        fourInRowX++;
      if (board[i][j] == 'o')
        fourInRowO++;
    }
    if (fourInRowX == 4) {
      winner = 'x';
      return 'x';
    }
    if (fourInRowO == 4) {
      winner = 'o';
      return 'o';
    }
  }
  return '-';
}

// Sprawdzenie kolumn w poszukiwaniu czterech `x` lub `o`
inline char Game::checkCols() {
  for (int j{0}; j < 4; ++j) {
    int fourInColX{0};
    int fourInColO{0};
    for (int i{0}; i < 4; ++i) {
      if (board[i][j] == '-')
        break;
      if (board[i][j] == 'x')
        fourInColX++;
      if (board[i][j] == 'o')
        fourInColO++;
    }
    if (fourInColX == 4) {
      winner = 'x';
      return 'x';
    }
    if (fourInColO == 4) {
      winner = 'o';
      return 'o';
    }
  }
  return '-';
}

// Sprawdzenie przekątnych
inline char Game::checkDiagonals() {
  int fourInDiagX{0};
  int fourInDiagO{0};
  for (int i{0}; i < 4; ++i) {
    if (board[i][i] == '-')
      break;
    if (board[i][i] == 'x')
      fourInDiagX++;
    if (board[i][i] == 'o')
      fourInDiagO++;
  }
  if (fourInDiagX == 4) {
    winner = 'x';
    return 'x';
  }
  if (fourInDiagO == 4) {
    winner = 'o';
    return 'o';
  }

  fourInDiagX = 0;
  fourInDiagO = 0;
  for (int i{0}; i < 4; ++i) {
    if (board[i][3 - i] == '-')
      break;
    if (board[i][3 - i] == 'x')
      fourInDiagX++;
    if (board[i][3 - i] == 'o')
      fourInDiagO++;
  }
  if (fourInDiagX == 4) {
    winner = 'x';
    return 'x';
  }
  if (fourInDiagO == 4) {
    winner = 'o';
    return 'o';
  }
  return '-';
}

// Sprawdzenie zwycięzcy
inline char Game::checkWinner() {
  char winner = checkRows();
  if (winner == '-')
    winner = checkCols();
  if (winner == '-')
    winner = checkDiagonals();
  return winner;
}

// Określenie zwycięzcy
inline std::string Game::whoIsWinner() {
  char winner = checkWinner();
  if (winner != '-')
    return std::string(1, winner);
  for (int i{0}; i < 4; ++i)
    for (int j{0}; j < 4; ++j)
      if (board[i][j] == '-')
        return "Game is still on\n";
  return "Tie";
}

// Sprawdzenie, czy gra się zakończyła
inline bool Game::endGame() { return moves == 16; }
