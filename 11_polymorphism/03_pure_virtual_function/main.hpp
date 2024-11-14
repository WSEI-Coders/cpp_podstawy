#pragma once

#include <iostream>
#include <string>

/**
 * Klasa bazowa `Animal` reprezentuje zwierzę z podstawowymi informacjami,
 * takimi jak imię i typ. Zawiera funkcję wirtualną `makeSound()`, która musi
 * być zaimplementowana przez klasy pochodne.
 */
class Animal {
private:
  std::string name; // Imię zwierzęcia
  std::string type; // Typ zwierzęcia (np. kot, pies)

public:
  // Konstruktor klasy `Animal`
  Animal(std::string nameIn, std::string typeIn);

  // Funkcja wirtualna do definiowania dźwięku, jaki wydaje zwierzę (do
  // nadpisania)
  virtual void makeSound() const = 0;

  // Zwraca imię zwierzęcia
  std::string getName() const;

  // Zwraca typ zwierzęcia
  std::string getType() const;
};

// Implementacja konstruktora klasy `Animal`
Animal::Animal(std::string nameIn, std::string typeIn)
    : name{nameIn}, type{typeIn} {}

// Implementacja metody zwracającej imię zwierzęcia
std::string Animal::getName() const { return name; }

// Implementacja metody zwracającej typ zwierzęcia
std::string Animal::getType() const { return type; }

/**
 * Klasa `Cat` dziedziczy po `Animal` i implementuje metodę `makeSound()`.
 */
class Cat : public Animal {
public:
  // Konstruktor klasy `Cat`
  Cat(std::string nameIn);

  // Implementacja metody `makeSound()`
  void makeSound() const override;
};

// Implementacja konstruktora klasy `Cat`
Cat::Cat(std::string nameIn) : Animal(nameIn, "Cat") {}

// Implementacja metody `makeSound()` dla klasy `Cat`
void Cat::makeSound() const {
  std::cout << getName() << " (typ: " << getType() << ") mówi: Meow!\n";
}

/**
 * Klasa `Dog` dziedziczy po `Animal` i implementuje metodę `makeSound()`.
 */
class Dog : public Animal {
public:
  // Konstruktor klasy `Dog`
  Dog(std::string nameIn);

  // Implementacja metody `makeSound()`
  void makeSound() const override;
};

// Implementacja konstruktora klasy `Dog`
Dog::Dog(std::string nameIn) : Animal(nameIn, "Dog") {}

// Implementacja metody `makeSound()` dla klasy `Dog`
void Dog::makeSound() const {
  std::cout << getName() << " (typ: " << getType() << ") mówi: Woof!\n";
}
