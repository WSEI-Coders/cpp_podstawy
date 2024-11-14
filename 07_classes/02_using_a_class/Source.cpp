#include <iostream>
#include <string>

// Klasa `Student` przechowuje informacje o studencie, takie jak imię, ID i data
// ukończenia studiów
class Student {
  std::string name; // Przechowuje imię i nazwisko studenta
  int id;           // Przechowuje ID studenta
  int gradDate;     // Przechowuje datę ukończenia studiów

public:
  // Deklaracje metod ustawiających i pobierających wartości pól klasy
  void setName(std::string nameIn);
  void setId(int idIn);
  void setGradDate(int dateIn);
  std::string getName();
  int getId();
  int getGradDate();
  void print(); // Funkcja wyświetlająca dane studenta
};

// Definicja metody `setName`, która ustawia imię studenta
void Student::setName(std::string nameIn) { name = nameIn; }

// Definicja metody `setId`, która ustawia ID studenta
void Student::setId(int idIn) { id = idIn; }

// Definicja metody `setGradDate`, która ustawia datę ukończenia studiów
void Student::setGradDate(int gradDateIn) { gradDate = gradDateIn; }

// Definicja metody `print`, która wyświetla dane studenta
void Student::print() { std::cout << name << " " << id << " " << gradDate; }

// Definicja metody `getName`, która zwraca imię studenta
std::string Student::getName() { return name; }

// Definicja metody `getId`, która zwraca ID studenta
int Student::getId() { return id; }

// Definicja metody `getGradDate`, która zwraca datę ukończenia studiów
int Student::getGradDate() { return gradDate; }

int main() {
  int integer1;     // Zmienna całkowita
  float float1;     // Zmienna zmiennoprzecinkowa
  Student student1; // Obiekt klasy `Student`

  integer1 = 4;   // Przypisanie wartości do zmiennej całkowitej
  float1 = 4.333; // Przypisanie wartości do zmiennej zmiennoprzecinkowej

  // Ustawienie danych studenta
  student1.setName("Catherine Johnes"); // Przypisanie wartości do pola `name`
  student1.setId(54345);                // Przypisanie wartości do pola `id`
  student1.setGradDate(2017); // Przypisanie wartości do pola `gradDate`

  // Wyświetlenie wartości zmiennych
  std::cout << "integer1 = " << integer1 << "\n";
  std::cout << "float1 = " << float1 << "\n\n";

  // Wyświetlenie danych studenta za pomocą funkcji `print`
  std::cout << "Using the Student::print function\n";
  std::cout << "Student1 = ";
  student1.print();
  std::cout << "\n\n";

  // Wyświetlenie danych studenta za pomocą funkcji `get`
  std::cout << "Using the student access functions\n";
  std::cout << "Student1 name = " << student1.getName() << "\n";
  std::cout << "Student1 ID = " << student1.getId() << "\n";
  std::cout << "Student1 Grad Date = " << student1.getGradDate() << "\n";

  return 0;
}
