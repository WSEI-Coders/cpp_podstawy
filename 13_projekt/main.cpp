// Główne założenia aplikacji:
// 1. Stworzymy klasę bazową 'Animal' reprezentującą podstawowe dane o zwierzęciu w schronisku.
// 2. Będziemy posiadać klasy pochodne takie jak 'Dog' i 'Cat', dziedziczące po klasie bazowej.
// 3. Użyjemy kontenera std::vector do zarządzania kolekcją zwierząt.
// 4. Wykorzystamy różne operacje na kolekcji, takie jak dodawanie, usuwanie, przeszukiwanie.
// 5. Pokażemy, jak używać iteracji, std::unique_ptr oraz dynamicznego zarządzania pamięcią.

// Struktura plików aplikacji:
// - Animal.hpp      // Plik nagłówkowy zawierający klasę bazową Animal i jej interfejs
// - Dog.hpp         // Plik nagłówkowy z klasą Dog, dziedziczącą po Animal
// - Cat.hpp         // Plik nagłówkowy z klasą Cat, dziedziczącą po Animal
// - Shelter.hpp     // Plik nagłówkowy z klasą Shelter do zarządzania kolekcją zwierząt
// - main.cpp        // Plik główny z funkcją main i interakcją z użytkownikiem
#include "Dog.hpp"
#include "Cat.hpp"
#include "Shelter.hpp"
#include <iostream>

int main() {
    Shelter shelter;

    // Dodajemy zwierzęta do schroniska
    shelter.addAnimal<Dog>("Buddy", 5);
    shelter.addAnimal<Cat>("Whiskers", 3);
    shelter.addAnimal<Dog>("Rex", 7);
    shelter.addAnimal<Cat>("Mittens", 2);

    std::cout << "List of animals in the shelter:\n";
    shelter.listAnimals();

    std::cout << "\nRemoving animals older than 5 years...\n";
    shelter.removeOldAnimals(5);

    std::cout << "Updated list of animals in the shelter:\n";
    shelter.listAnimals();

    return 0;
}
