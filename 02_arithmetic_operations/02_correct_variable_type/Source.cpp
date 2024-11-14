/**
 * Przykład rzutowania typów w C++
 * 
 * Opis:
 * - Program pokazuje użycie `static_cast` do rzutowania typu `int` na `float` w celu uzyskania dokładniejszego wyniku dzielenia.
 * - Bez rzutowania dzielenie dwóch liczb całkowitych (`int`) zwracałoby wynik w postaci liczby całkowitej (obcięcie części dziesiętnej).
 * - Rzutowanie jednego z operandów na `float` zapewnia, że wynik będzie typu zmiennoprzecinkowego.
 */

#include <iostream>

int main()
{
    // Licznik i mianownik
    int numerator = 4; // Licznik (wartość całkowita)
    int denominator = 5; // Mianownik (wartość całkowita)

    // Rzutowanie typu dla uzyskania wyniku zmiennoprzecinkowego
    float answer = numerator / static_cast<float>(denominator); // Rzutowanie denominator na float
    std::cout << "answer = " << answer << std::endl;

    return 0;
}
