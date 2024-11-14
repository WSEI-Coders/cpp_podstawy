#include "TicTacToeFunctions.cpp"

/**
 * Funkcja główna programu
 * - Tworzy obiekt gry `Game`.
 * - Pobiera imiona graczy.
 * - Obsługuje przebieg gry, w tym wykonywanie ruchów i sprawdzanie zwycięzcy.
 */
int main() {
  Game game;         // Utworzenie obiektu `Game`
  std::string nameX; // Imię gracza `x`
  std::string nameO; // Imię gracza `o`

  // Pobranie imion graczy
  getUserNames(nameX, nameO);
  game.printBoard(); // Wyświetlenie początkowej planszy

  // Główna pętla gry
  while (!game.endGame()) {
    // Tura gracza `x`
    printUserPrompt(nameX, 'x');
    checkResponse(game, 'x');
    game.printBoard();             // Wyświetlenie stanu planszy po ruchu
    if (game.whoIsWinner() == "x") // Sprawdzenie, czy `x` wygrał
      break;

    // Tura gracza `o`
    printUserPrompt(nameO, 'o');
    checkResponse(game, 'o');
    game.printBoard();             // Wyświetlenie stanu planszy po ruchu
    if (game.whoIsWinner() == "o") // Sprawdzenie, czy `o` wygrał
      break;
  }

  // Wyświetlenie końcowego stanu planszy i zwycięzcy
  game.printBoard();
  std::cout << "The winner is: " << game.whoIsWinner() << std::endl;

  return 0;
}
