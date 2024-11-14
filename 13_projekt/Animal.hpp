#pragma once
#include <string>
#include <iostream>

// Klasa bazowa 'Animal' reprezentująca podstawowe informacje o zwierzęciu
class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& name, int age)
        : name(name), age(age) {}

    virtual ~Animal() = default;

    // Metoda wirtualna umożliwiająca nadpisanie w klasach pochodnych
    virtual void makeSound() const = 0;

    // Funkcja do wyświetlania informacji
    virtual void printInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

    // Getter dla wieku
    int getAge() const {
        return age;
    }
};
