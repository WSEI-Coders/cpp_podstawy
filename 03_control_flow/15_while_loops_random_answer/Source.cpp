/**
 * Przykład wykorzystania nowoczesnego generatora liczb losowych w C++11
 * 
 * Opis:
 * - Program pozwala użytkownikowi zgadywać losową liczbę od 0 do 100.
 * - Używany jest nowoczesny generator liczb losowych (`std::random_device`, `std::default_random_engine` oraz `std::uniform_int_distribution`) zamiast starego `rand()`.
 * - `rand()` to starsze, mniej precyzyjne i mniej elastyczne podejście do generowania liczb losowych w porównaniu do nowoczesnych mechanizmów.
 * 
 * Dlaczego warto używać nowoczesnych generatorów liczb losowych:
 * - **Lepsza jakość losowości**: `rand()` może być bardziej przewidywalny i oferuje mniejszą entropię.
 * - **Kontrola i elastyczność**: Nowoczesne biblioteki C++ umożliwiają łatwe korzystanie z różnych rodzajów generatorów i rozkładów (np. równomierny, normalny).
 * - **Bezpieczeństwo i przenośność**: `std::random_device` i związane z nim klasy zapewniają większą przenośność i często lepsze właściwości bezpieczeństwa.
 */

#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cstdlib>

int main()
{
    int guess = -1;
    std::string user_guess;

    //// Old C-style random number generator
    // srand(time(nullptr)); // ustawienie ziarna dla generatora liczb pseudolosowych
    // target = rand() % 100 + 1; // generowanie "losowej" liczby w stary sposób

    // Nowoczesny generator liczb losowych w C++11
    // https://en.cppreference.com/w/cpp/header/random
    std::random_device r; // Urządzenie losowe do uzyskiwania ziarna
    std::default_random_engine e1{ r() }; // Generator losowy
    std::uniform_int_distribution<int> uniform_dist(0, 100); // Równomierny rozkład liczb całkowitych od 0 do 100
    int target = uniform_dist(e1); // Generowanie liczby losowej

    while (true)
    {
        std::cout << "Guess a number between 0 and 100 (enter 'q' to quit): ";
        std::getline(std::cin, user_guess);
        if (user_guess == "q")
        {
            std::cout << "You have quit the game :(\n";
            break;
        }

        guess = std::stoi(user_guess); // Konwersja ciągu znaków na liczbę całkowitą
        std::cout << "For testing, your target is: " << target << std::endl;

        // Sprawdzanie zgadywanej wartości
        if (guess > target)
            std::cout << "The guess is too high\n";
        else if (guess < target)
            std::cout << "The guess is too low\n";
        else if (guess == target)
        {
            std::cout << "You guessed the correct answer!\n";
            break;
        }
        else
        {
            std::cout << "Unknown command!\n";
        }
    }

    return 0;
}
