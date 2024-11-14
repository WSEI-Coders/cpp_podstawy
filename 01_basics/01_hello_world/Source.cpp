#include <iostream>  // Włączenie biblioteki, która umożliwia korzystanie ze standardowego wejścia/wyjścia, np. cout.

int main() {
    // Funkcja main() jest punktem wejścia do programu w C++. Program zaczyna wykonanie od tego miejsca.

    std::cout << "Hello World" << std::endl; 
    // std::cout - strumień wyjściowy, używany do wyświetlania tekstu na ekranie.
    // "Hello World" - tekst, który zostanie wypisany na ekranie.
    // std::endl - znak końca linii, działa podobnie jak "\n", ale dodatkowo opróżnia bufor wyjściowy.

    return 0;  // Funkcja main() zwraca 0, co oznacza, że program zakończył się pomyślnie.
}