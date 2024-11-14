#include "main.hpp"

int main()
{
    char operation = '*'; // Znak operacji matematycznej
    float input1 = 9.8;   // Pierwsza liczba
    float input2 = 2.3;   // Druga liczba
    float result;         // Zmienna do przechowywania wyniku

    // Wywołanie funkcji `calculate` w celu obliczenia wyniku
    calculate(input1, input2, operation, result);

    // Wywołanie funkcji `printEquation` w celu wyświetlenia równania
    printEquation(input1, input2, operation, result);
    std::cout << std::endl;
    return 0;
}
