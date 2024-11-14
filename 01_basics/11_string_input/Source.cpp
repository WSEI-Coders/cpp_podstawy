/**
 * Przykład użycia std::getline do pobierania pełnej linii tekstu od użytkownika
 * 
 * Opis:
 * - `std::cin` przerywa wprowadzanie tekstu po napotkaniu spacji, dlatego użycie `std::getline` jest lepszym rozwiązaniem
 *   do pobierania całych linii tekstu.
 * - `std::getline` umożliwia wprowadzanie łańcuchów znaków zawierających spacje.
 */

#include <iostream>
#include <string> // Włączenie biblioteki do obsługi łańcuchów znaków

int main()
{
    std::string userName; // Zmienna przechowująca imię użytkownika

    // Pobieranie pełnej linii tekstu od użytkownika za pomocą std::getline
    std::cout << "Tell me your name: ";
    std::getline(std::cin, userName); // Użycie std::getline do wczytania całej linii tekstu, łącznie ze spacjami

    // Wyświetlenie powitania użytkownika
    std::cout << "Hello " << userName << std::endl;

    return 0;
}
