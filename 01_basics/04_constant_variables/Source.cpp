#include <iostream>  // Włączenie biblioteki, która umożliwia korzystanie ze standardowego wejścia/wyjścia, np. cout.

using namespace std;  // Użycie 'namespace std' pozwala zrezygnować z prefiksu 'std::' przed elementami biblioteki standardowej.

int main() {
    // Funkcja main() jest punktem wejścia do programu w C++. Program zaczyna wykonanie od tego miejsca.

    // Przykład użycia zmiennej const (stałej).
    // Zmienna const to zmienna, której wartość nie może być zmieniona po przypisaniu.
    const int weightGoal = 100;  // Deklaracja zmiennej stałej (const), której wartość nie może być zmieniona po inicjalizacji.
    cout << "WeightGoal (cel wagowy) = " << weightGoal << "\n";

    // Próba zmiany wartości zmiennej const spowodowałaby błąd kompilacji.
    // weightGoal = 200;  // Błąd! Nie można zmienić wartości zmiennej const.
    // W związku z tym poniższa linia kodu jest zakomentowana.

    // Przykład użycia zmiennej bez const, którą można zmienić.
    int weightGoalVariable = 100;  // Deklaracja zmiennej, której wartość można zmieniać.
    cout << "WeightGoalVariable (zmienna cel wagowy) = " << weightGoalVariable << "\n";
    weightGoalVariable = 200;  // Zmiana wartości zmiennej.
    cout << "WeightGoalVariable po zmianie = " << weightGoalVariable << "\n";

    return 0;  // Funkcja main() zwraca 0, co oznacza, że program zakończył się pomyślnie.
}
