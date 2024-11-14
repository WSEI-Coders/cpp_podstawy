/**
 * Program do obliczania objętości różnych figur geometrycznych
 * 
 * Opis:
 * - Program oblicza objętości sześcianu, kuli i stożka na podstawie podanych wartości.
 * - Wykorzystuje funkcje z biblioteki <cmath> do potęgowania (`std::powf`) oraz stałą matematyczną `pi` z <numbers>.
 * - Wzory:
 *   1. Sześcian: V = a^3
 *   2. Kula: V = (4/3) * pi * r^3
 *   3. Stożek: V = pi * r^2 * (h/3)
 */

#include <iostream>
#include <cmath>    // Używane do potęgowania
#include <numbers>  // Używane do stałej pi

int main()
{
    // Długość boku sześcianu
    float cubeSide = 5.4;
    // Promień kuli
    float sphereRadius = 2.33;
    // Promień podstawy stożka
    float coneRadius = 7.65;
    // Wysokość stożka
    float coneHeight = 14;

    // Zmienne do przechowywania objętości
    float volCube = 0;
    float volSphere = 0;
    float volCone = 0;

    // Obliczanie objętości sześcianu
    volCube = std::powf(cubeSide, 3); // Użycie std::powf do potęgowania (a^3)
    std::cout << "Cube volume: " << volCube << std::endl;

    // Obliczanie objętości kuli
    volSphere = (4 / 3.0f) * std::numbers::pi * std::powf(sphereRadius, 3); // (4/3) * pi * r^3
    std::cout << "Sphere volume: " << volSphere << std::endl;

    // Obliczanie objętości stożka
    volCone = std::numbers::pi * std::powf(coneRadius, 2) * (coneHeight / 3.0f); // pi * r^2 * (h/3)
    std::cout << "Cone volume: " << volCone << std::endl;

    return 0;
}
