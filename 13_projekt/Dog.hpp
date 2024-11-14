#pragma once
#include "Animal.hpp"

// Klasa 'Dog' dziedzicząca po 'Animal'
class Dog : public Animal {
public:
    Dog(const std::string& name, int age)
        : Animal(name, age) {}

    // Nadpisanie metody makeSound()
    void makeSound() const override {
        std::cout << name << " says: Woof!\n";
    }

    void printInfo() const override {
        std::cout << "Dog - ";
        Animal::printInfo();
    }
};
