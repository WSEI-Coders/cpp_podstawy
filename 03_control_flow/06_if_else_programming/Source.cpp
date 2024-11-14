/**
 * Program do sugerowania zwierzęcia na podstawie preferencji użytkownika
 *
 * Opis:
 * - Program pyta użytkownika, czy woli zwierzę z futrem, piórami lub łuskami.
 * - Na podstawie wyboru użytkownika, program może dodatkowo zapytać, gdzie ma
 * żyć wybrane zwierzę.
 * - Wykorzystano zagnieżdżone instrukcje `if - else if` do kontrolowania
 * przepływu programu.
 */

#include <iostream>

int main() {
  char skin, location; // Zmienne przechowujące preferencje użytkownika

  // Pytanie użytkownika o preferencje dotyczące rodzaju skóry zwierzęcia
  std::cout
      << "Would you like an animal with fur(f), feathers(t), or scales(s)? ";
  std::cin >> skin;
  std::cout << skin << "\n";

  // Pierwszy poziom decyzji na podstawie wyboru użytkownika
  if (skin == 'f') {
    // Jeśli użytkownik wybierze futro
    std::cout << "Get a dog" << "\n";
  } else if (skin == 't') {
    // Jeśli użytkownik wybierze pióra
    std::cout << "Get a bird" << "\n";
  } else if (skin == 's') {
    // Jeśli użytkownik wybierze łuski, dodatkowe pytanie o środowisko życia
    std::cout << "Would you like an animal that lives in water(w), land(l), or "
                 "both(b)? ";
    std::cin >> location;
    std::cout << location << "\n";

    // Drugi poziom decyzji na podstawie miejsca zamieszkania
    if (location == 'w') {
      std::cout << "Get a fish" << "\n";
    } else if (location == 'l') {
      std::cout << "Get a gecko" << "\n";
    } else if (location == 'b') {
      std::cout << "Get a frog" << "\n";
    } else {
      // Obsługa niepoprawnego wyboru
      std::cout << "Enter water(w), land(l), or both(b)\n";
    }
  } else {
    // Obsługa niepoprawnego wyboru na pierwszym poziomie
    std::cout << "Please choose fur(f), feathers(t), scales(s)" << "\n";
  }

  return 0;
}
