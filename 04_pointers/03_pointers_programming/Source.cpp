/**
 * Przykład wyświetlania adresów pamięci różnych typów zmiennych w C++
 * 
 * Opis:
 * - Program demonstruje, jak można uzyskać i wyświetlić adresy pamięci zmiennych różnych typów.
 * - Dla każdej zmiennej wyświetlana jest jej wartość oraz adres pamięci, w którym jest przechowywana.
 * - W przypadku zmiennej typu `char` stosujemy rzutowanie na `void*` dla poprawnego wyświetlenia adresu.
 */

#include <iostream>
#include <string>

int main()
{
    // Deklaracja zmiennych różnych typów
    int givenInt{ 32 };
    float givenFloat{ 64.212f };
    double givenDouble{ 4.76545 };
    std::string givenString{"Hey look at me! I know pointers!"};
    char givenChar{'*'};

    // Wyświetlanie wartości i adresu zmiennej `givenInt`
    std::cout << "givenInt = " << givenInt << "\n";
    std::cout << "Address of givenInt is at &givenInt = " << &givenInt << "\n";

    // Wyświetlanie wartości i adresu zmiennej `givenFloat`
    std::cout << "givenFloat = " << givenFloat << "\n";
    std::cout << "Address of givenFloat is at &givenFloat = " << &givenFloat << "\n";

    // Wyświetlanie wartości i adresu zmiennej `givenDouble`
    std::cout << "givenDouble = " << givenDouble << "\n";
    std::cout << "Address of givenDouble is at &givenDouble = " << &givenDouble << "\n";

    // Wyświetlanie wartości i adresu zmiennej `givenString`
    std::cout << "givenString = " << givenString << "\n";
    std::cout << "Address of givenString is at &givenString = " << &givenString << "\n";

    // Wyświetlanie wartości i adresu zmiennej `givenChar`
    std::cout << "givenChar = " << givenChar << "\n";
    // Rzutowanie adresu `char` na `void*` dla poprawnego wyświetlenia adresu w standardowym strumieniu wyjściowym
    std::cout << "Address of givenChar is at &givenChar = " << static_cast<void *>(&givenChar) << "\n";

    return 0;
}
