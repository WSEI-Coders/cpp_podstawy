#pragma once
#include <vector>
#include <memory> // std::unique_ptr
#include <algorithm> // std::remove_if
#include "Animal.hpp"

// Klasa Shelter zarządza kolekcją obiektów typu Animal (oraz klas pochodnych)
// To pozwala na przechowywanie zwierząt w dynamicznym kontenerze i zarządzanie nimi.
class Shelter {
private:
    // Używamy std::vector do przechowywania zwierząt. 
    // Zamiast przechowywać obiekty, przechowujemy std::unique_ptr do obiektów Animal.
    // std::unique_ptr to inteligentny wskaźnik, który automatycznie zarządza pamięcią obiektów, 
    // więc nie musimy martwić się o ręczne usuwanie obiektów.
    std::vector<std::unique_ptr<Animal>> animals;

public:
    // Szablon funkcji addAnimal pozwala na dodawanie dowolnego typu obiektu, który dziedziczy po Animal
    // T to typ zwierzęcia (np. Dog, Cat), a Args... to argumenty przekazywane do konstruktora danego typu.
    // Szablon wariadyczny (Args... args) oznacza, że możemy przekazać dowolną liczbę argumentów.
    template <typename T, typename... Args>
    void addAnimal(Args&&... args) {
        // std::make_unique<T> tworzy obiekt typu T na stercie i zwraca std::unique_ptr do niego.
        // Przekazywanie argumentów std::forward<Args>(args)... pozwala na optymalne przekazanie argumentów do konstruktora.
        animals.push_back(std::make_unique<T>(std::forward<Args>(args)...));
    }

    // Funkcja do wyświetlania informacji o wszystkich zwierzętach
    // Używamy iteracji przez std::vector przy użyciu const auto&, aby uniknąć kopiowania obiektów.
    void listAnimals() const {
        for (const auto& animal : animals) {
            animal->printInfo(); // Wywołujemy metodę wirtualną printInfo()
            animal->makeSound(); // Wywołujemy metodę wirtualną makeSound()
        }
    }

    // Funkcja do usuwania zwierząt starszych niż określony wiek
    void removeOldAnimals(int ageLimit) {
        // std::remove_if przeszukuje kontener i "przesuwa" elementy do usunięcia na koniec kontenera.
        // animals.erase usuwa elementy, które zostały oznaczone jako usunięte przez std::remove_if.
        animals.erase(std::remove_if(animals.begin(), animals.end(),
            [ageLimit](const std::unique_ptr<Animal>& animal) {
                // Lambda funkcja sprawdza, czy wiek zwierzęcia przekracza podany limit.
                // Jeśli tak, zwraca true, co oznacza, że element zostanie "przesunięty" do usunięcia.
                return animal->getAge() > ageLimit;
            }), animals.end());
    }
};
