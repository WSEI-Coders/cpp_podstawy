/*
 * Przykład dzielenia programu na mniejsze pliki .h i .cpp
 * 
 * Opis:
 * - Program demonstruje, jak można rozdzielić deklaracje i implementacje za pomocą plików nagłówkowych.
 * - `main.h` zawiera dyrektywę `#pragma once` dla zabezpieczenia przed wielokrotnym dołączaniem.
 */

#include "main.h" // Dołączenie pliku nagłówkowego

int main()
{
    // Prosta wiadomość testująca dołączanie pliku nagłówkowego
    std::cout << "Hello, I use header file!\n";
    return 0;
}
