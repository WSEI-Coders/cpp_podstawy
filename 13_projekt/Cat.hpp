#pragma once
#include "Animal.hpp"

// Klasa 'Cat' dziedzicząca po 'Animal'
class Cat : public Animal {
public:
    Cat(const std::string& name, int age)
        : Animal(name, age) {}

    // Nadpisanie metody makeSound()
    void makeSound() const override {
        std::cout << name << " says: Meow!\n";
    }

    void printInfo() const override {
        std::cout << "Cat - ";
        Animal::printInfo();
    }
};
