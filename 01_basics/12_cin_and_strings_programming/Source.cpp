/**
 * Przykład pobierania i wyświetlania danych użytkowników z użyciem std::getline
 * 
 * Opis:
 * - Program pobiera dane dwóch użytkowników: imię, adres i numer telefonu.
 * - Wykorzystuje `std::getline` do pobierania całych linii tekstu, co pozwala na wprowadzanie danych zawierających spacje.
 * - Wyświetla dane użytkowników w odpowiednim formacie.
 * 
 * Możliwe ulepszenia:
 * - Zamiast oddzielnych zmiennych dla każdego użytkownika, można użyć struktury dla lepszego zarządzania danymi.
 */

#include <iostream>
#include <string>

int main()
{
    // Dane użytkownika 1
    std::string u1_name{};
    std::string u1_address{};
    std::string u1_phone_number{};

    // Dane użytkownika 2
    std::string u2_name{};
    std::string u2_address{};
    std::string u2_phone_number{};

    // Pobieranie danych użytkownika 1
    std::cout << "Enter user1 name: ";
    std::getline(std::cin, u1_name);
    std::cout << "Enter user1 address: ";
    std::getline(std::cin, u1_address);
    std::cout << "Enter user1 phone number: ";
    std::getline(std::cin, u1_phone_number);

    // Pobieranie danych użytkownika 2
    std::cout << "Enter user2 name: ";
    std::getline(std::cin, u2_name);
    std::cout << "Enter user2 address: ";
    std::getline(std::cin, u2_address);
    std::cout << "Enter user2 phone number: ";
    std::getline(std::cin, u2_phone_number);

    // Wyświetlanie danych użytkownika 1
    std::cout << u1_name << "\n\t\t" << u1_address << "\n\t\t"
              << u1_phone_number << std::endl;

    // Wyświetlanie danych użytkownika 2
    std::cout << u2_name << "\n\t\t" << u2_address << "\n\t\t"
              << u2_phone_number << std::endl;

    return 0;
}
