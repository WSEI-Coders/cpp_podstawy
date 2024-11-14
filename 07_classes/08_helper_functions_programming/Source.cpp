#include "main.hpp"

int main() {
  // Tworzenie obiektu `Gameboard` i ustawianie wartości na planszy
  Gameboard game1;
  game1.setGameSpace(0, 0, 'x');
  game1.setGameSpace(0, 1, 'x');
  game1.setGameSpace(0, 2, 'x');
  game1.setGameSpace(0, 3, 'y');
  game1.setGameSpace(1, 0, 'x');
  game1.setGameSpace(2, 0, 'x');
  game1.setGameSpace(3, 0, 'x');
  game1.setGameSpace(3, 1, 'x');
  game1.setGameSpace(3, 2, 'x');
  game1.setGameSpace(3, 3, 'x');

  // Sprawdzenie, czy cztery `x` znajdują się w jednym rzędzie
  if (game1.fourInRow() == 1) {
    std::cout << "X got four in a row! \n\n";
  } else {
    std::cout << "X did not get four in a row :(\n\n";
  }

  // Wyświetlenie stanu planszy
  game1.printInfo();

  return 0;
}
