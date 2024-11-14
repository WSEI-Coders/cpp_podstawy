/**
 * Program do pracy z tablicą liczb całkowitych w C++
 * 
 * Opis:
 * - Program pozwala użytkownikowi na wprowadzenie dziesięciu liczb do tablicy.
 * - Następnie wyświetla liczby w kolejności, w jakiej zostały wprowadzone, oraz w odwrotnej kolejności.
 * - Program używa funkcji `std::sort` z biblioteki `algorithm` do posortowania tablicy.
 */

#include <iostream>
#include <algorithm> // Biblioteka do funkcji `std::sort`

int main()
{
    const int numOfElements{10}; // Stała określająca liczbę elementów w tablicy
    int userInput[numOfElements]; // Tablica do przechowywania wprowadzonych liczb

    // Pobieranie danych od użytkownika
    for (int i = 0; i < numOfElements; i++)
    {
        std::cout << "Enter " << i + 1 << " number: ";
        std::cin >> userInput[i];
    }

    // Wyświetlanie elementów w kolejności wprowadzonej przez użytkownika
    std::cout << "Numbers in original order: ";
    for (int i = 0; i < numOfElements; i++)
        std::cout << userInput[i] << " ";
    std::cout << std::endl;

    // Wyświetlanie elementów w odwrotnej kolejności
    std::cout << "Numbers in reverse order: ";
    for (int i = numOfElements - 1; i >= 0; i--)
        std::cout << userInput[i] << " ";
    std::cout << std::endl;

    // Sortowanie tablicy w porządku rosnącym
    // Użycie `std::sort` z zakresowym wywołaniem `std::begin()` i `std::end()`
    // `std::begin(userInput)` zwraca wskaźnik na początek tablicy, a `std::end(userInput)` na koniec
    std::sort(std::begin(userInput), std::end(userInput));

    // Wyświetlanie elementów po sortowaniu
    std::cout << "Numbers in sorted order: ";
    for (int i = 0; i < numOfElements; i++)
        std::cout << userInput[i] << " ";
    std::cout << std::endl;

    return 0;
}
