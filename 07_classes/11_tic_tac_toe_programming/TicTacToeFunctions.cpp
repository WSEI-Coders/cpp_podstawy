#include "TicTacToe.h"

/**
 * Funkcja `getUserNames` pobiera od użytkownika imiona dla dwóch graczy.
 *
 * @param userX - zmienna przechowująca imię gracza `x`
 * @param userY - zmienna przechowująca imię gracza `o`
 */
inline void getUserNames(std::string &userX, std::string &userY) {
  std::cout << "Name of user to be 'x' : ";
  std::cin >> userX;
  std::cout << "Name of user to be 'o' : ";
  std::cin >> userY;
}

/**
 * Funkcja `printUserPrompt` wyświetla komunikat z prośbą o wykonanie ruchu.
 *
 * @param nameIn - imię gracza, który wykonuje ruch
 * @param letter - symbol gracza (`x` lub `o`)
 */
inline void printUserPrompt(std::string nameIn, char letter) {
  std::cout << nameIn << ", where would you like to place an " << letter
            << "?: ";
}

/**
 * Funkcja `checkResponse` pobiera współrzędne od gracza i ustawia pozycję na
 * planszy.
 *
 * @param game - referencja do obiektu `Game`
 * @param input - symbol gracza (`x` lub `o`)
 */
inline void checkResponse(Game &game, char input) {
  int x, y;
  std::cout << "Enter (x, y) position: ";
  std::cin >> x >> y;
  game.setPosition(x, y, input);
}
