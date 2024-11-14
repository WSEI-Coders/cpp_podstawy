/**
 * Przykład użycia tradycyjnego 'enum' i nowoczesnego 'enum class' w C++
 * 
 * Porównanie:
 * - Tradycyjny 'enum' jest nieprzestrzenny i pozwala na automatyczne rzutowanie na wartości całkowite.
 * - Nowoczesny 'enum class' jest silnie typowany, co eliminuje niezamierzone konwersje
 *   i umożliwia bardziej bezpieczne odwoływanie się do jego wartości.
 * 
 * Zalety 'enum class':
 * - Silnie typowany, bez automatycznego rzutowania na wartości całkowite.
 * - Wymaga użycia operatora zakresu (::), co poprawia czytelność kodu.
 * - Zapobiega potencjalnym konfliktom nazw.
 */

#include <iostream>

// Przykład z tradycyjnym enum
enum MONTHS { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec }; // Stary styl 'enum'

int main()
{
    // Deklaracja zmiennej typu enum MONTHS
    MONTHS bestMonth;

    // Przypisanie wartości do zmiennej typu MONTHS
    bestMonth = Jan;

    // Sprawdzenie wartości zmiennej
    if (bestMonth == Jan)
        std::cout << "I'm not sure January is the best month\n";

    // Przykład nowoczesnego podejścia z użyciem enum class
    enum class NewMonths { January, February, March, April, May, June, July, August, September, October, November, December };

    // Deklaracja zmiennej typu enum class
    NewMonths favoriteMonth = NewMonths::January;

    // Nowoczesne podejście wymaga użycia operatora zakresu "::" do odwoływania się do wartości
    if (favoriteMonth == NewMonths::January)
        std::cout << "Using enum class: January is selected as the favorite month\n";

    return 0;
}
