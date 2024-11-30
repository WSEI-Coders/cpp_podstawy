#include <algorithm>
#include <iostream>
#include <stdexcept>

/*
   Projekt: implementacja dynamicznej tablicy (klasa Array) z zarządzaniem
   pamięcią i Rule of 5.

   Ten projekt ma na celu stworzenie dynamicznej tablicy z obsługą różnych
   operacji, takich jak dodawanie, usuwanie, wyszukiwanie, modyfikowanie
   elementów oraz wiele innych funkcji. Implementacja klasy przestrzega zasady
   Rule of 5, co oznacza, że definiujemy:
    - Konstruktor kopiujący
    - Konstruktor przenoszący
    - Operator przypisania kopiującego
    - Operator przypisania przenoszącego
    - Destruktor

   Główna idea Rule of 5 to zarządzanie dynamicznie alokowaną pamięcią w sposób
   bezpieczny, zapewniając, że wszystkie kopie i przypisania klasy będą
   poprawnie przeprowadzone.
*/

class Array {
  // Przeciążony operator wyświetlania, dzięki czemu obiekt klasy Array można
  // wyświetlić używając std::cout.
  friend std::ostream &operator<<(std::ostream &out, const Array &a) {
    for (int i{0}; i < a.size_; ++i) {
      out << a.arr_[i]
          << ' '; // Iteracja przez wszystkie elementy i ich wyświetlanie
    }
    return out;
  }

public:
  // 1. Podstawowy konstruktor tworzy pustą tablicę
  Array() : size_(0), capacity_(0), arr_(nullptr) {
    // Inicjalizacja tablicy o rozmiarze zero (pusta tablica), bez alokacji
    // pamięci
  }

  // 2. Konstruktor z parametrem 'size' umożliwia zarezerwowanie pamięci o
  // określonym rozmiarze
  explicit Array(int size) : size_(size) {
    if (size_ < 0) {
      throw std::length_error("Size can't be negative");
    }
    // Dla zwiększenia efektywności pamięć jest alokowana z zapasem
    capacity_ = 2 * size_;
    arr_ = new int[capacity_]; // Alokacja pamięci dla tablicy
  }

  // 3. Konstruktor z listą inicjalizacyjną.
  explicit Array(const std::initializer_list<int> &list) {
    size_ = list.size();
    // Podwójna pojemność dla ewentualnych przyszłych operacji
    capacity_ = 2 * size_;
    arr_ = new int[capacity_]; // Alokacja pamięci
    // Kopiowanie elementów z listy do tablicy
    std::copy(list.begin(), list.end(), arr_);
  }

  // 4. Konstruktor kopiujący
  Array(const Array &other) : size_(other.size_), capacity_(other.capacity_) {
    // Sprawdzenie czy kopiowany obiekt ma jakieś elementy
    if (size_ == 0) {
      arr_ = nullptr;
      return;
    }
    // Kopiowanie elementów z innej tablicy
    arr_ = new int[capacity_];
    std::copy(other.arr_, other.arr_ + size_, arr_);
  }

  // 5. Konstruktor przenoszący (transfer zasobów zamiast kopiowania)
  Array(Array &&other) noexcept
      : size_(other.size_), capacity_(other.capacity_), arr_(other.arr_) {
    // Po przeniesieniu należy ustawić wartości oryginalnego obiektu na zero i
    // nullptr
    other.size_ = 0;
    other.capacity_ = 0;
    other.arr_ = nullptr;
  }

  // Destruktor - zwalnianie pamięci przy niszczeniu obiektu
  ~Array() {
    std::cout << "Destructor called\n";
    delete[] arr_; // Zwalnianie dynamicznie zaalokowanej pamięci
  }

  // Metody:
  // 1. Rozmiar tablicy
  [[nodiscard]] int size() const { return size_; }

  // 2. Pojemność tablicy
  [[nodiscard]] int capacity() const { return capacity_; }

  // 3. Dostęp do elementu z weryfikacją zakresu - wersja const (nie modyfikuje
  // wartości)
  [[nodiscard]] const int &at(const int &idx) const {
    if (idx >= size_ || idx < 0) {
      throw std::out_of_range("Index out of range\n");
    }
    return arr_[idx];
  }

  // 4. Dostęp do elementu z weryfikacją zakresu - wersja modyfikowalna
  int &at(const int &idx) {
    if (idx >= size_ || idx < 0) {
      throw std::out_of_range("Index out of range\n");
    }
    return arr_[idx];
  }

  // 5. Dodawanie elementu na końcu tablicy
  void append(int val) {
    if (size_ >= capacity_) {
      capacity_ = (size_ + 1) * 2; // Zwiększenie pojemności
      resize(capacity_);           // Alokacja większej pamięci
    }
    arr_[size_] = val; // Dodanie elementu na końcu
    size_++;
  }

  // 6. Wstawianie elementu w określone miejsce
  void insert(int idx, int val) {
    if (idx < 0 || idx > size_) {
      throw std::out_of_range("Index out of range\n");
    }

    if (size_ >= capacity_) {
      capacity_ = (size_ + 1) * 2; // Zwiększenie pojemności
      resize(capacity_);
    }

    // Przesunięcie elementów w prawo, aby zrobić miejsce na nowy element
    for (int i{size_}; i > idx; --i) {
      arr_[i] = arr_[i - 1];
    }
    arr_[idx] = val; // Wstawienie nowego elementu
    size_++;
  }

  // 7. Usuwanie elementu z określonej pozycji
  void remove(int idx) {
    if (idx < 0 || idx >= size_) {
      throw std::out_of_range("Index out of range\n");
    }
    // Przesunięcie elementów w lewo, aby wypełnić lukę po usuniętym elemencie
    for (int i{idx}; i < size_ - 1; ++i) {
      arr_[i] = arr_[i + 1];
    }
    size_--;
  }

  // 8. Wyszukiwanie elementu (zwraca indeks lub -1, jeśli element nie istnieje)
  [[nodiscard]] int search(int val) const {
    for (int i{0}; i < size_; ++i) {
      if (arr_[i] == val) {
        return i;
      }
    }
    return -1; // Element nie został znaleziony
  }

  // 9. Znajdowanie maksymalnej wartości
  [[nodiscard]] int max() const {
    if (size_ < 1) {
      throw std::out_of_range("Your Array is empty!");
    }
    int m = arr_[0];
    for (int i{1}; i < size_; ++i) {
      if (arr_[i] > m) {
        m = arr_[i];
      }
    }
    return m;
  }

  // 10. Znajdowanie minimalnej wartości
  [[nodiscard]] int min() const {
    if (size_ < 1) {
      throw std::out_of_range("Your Array is empty!");
    }
    int m = arr_[0];
    for (int i{1}; i < size_; ++i) {
      if (arr_[i] < m) {
        m = arr_[i];
      }
    }
    return m;
  }

  // 11. Odwracanie kolejności elementów
  void reverse() {
    for (int i{0}; i < size_ / 2; ++i) {
      std::swap(arr_[i], arr_[size_ - i - 1]); // Zamiana elementów
    }
  }

  // 12. Rotacja elementów tablicy
  void rotate(int times = 1) {
    for (int i{0}; i < times; ++i) {
      rotateByOne();
    }
  }

  // Operatory
  // Operator [] dla wersji modyfikowalnej
  int &operator[](int idx) { return arr_[idx]; }

  // Operator [] dla wersji tylko do odczytu (const)
  const int &operator[](int idx) const { return arr_[idx]; }

  // Operator przypisania kopiującego
  Array &operator=(const Array &other) {
    if (this == &other) {
      return *this; // Zabezpieczenie przed samoprzypisaniem
    }
    delete[] arr_; // Zwalnianie starej pamięci

    size_ = other.size_;
    capacity_ = other.capacity_;
    if (size_ > 0) {
      arr_ = new int[capacity_];
      std::copy(other.arr_, other.arr_ + size_, arr_); // Kopiowanie elementów
    } else {
      arr_ = nullptr;
    }
    return *this;
  }

  // Operator przypisania przenoszącego
  Array &operator=(Array &&other) noexcept {
    if (this == &other) {
      return *this; // Zabezpieczenie przed samoprzypisaniem
    }
    delete[] arr_; // Zwalnianie starej pamięci

    size_ = other.size_;
    capacity_ = other.capacity_;
    arr_ = other.arr_; // Przeniesienie wskaźnika

    // Zerowanie stanu obiektu, z którego przenosimy
    other.size_ = 0;
    other.capacity_ = 0;
    other.arr_ = nullptr;

    return *this;
  }

  // Iteratory - implementacja wskaźników do elementów tablicy
  using iterator = int *;
  using const_iterator = const int *;
  using reverse_iterator = std::reverse_iterator<iterator>;
  using const_reverse_iterator = std::reverse_iterator<const_iterator>;

  // Metody zwracające iteratory
  iterator begin() { return arr_; }
  iterator end() { return arr_ + size_; }

  const_iterator begin() const { return arr_; }
  const_iterator end() const { return arr_ + size_; }

  const_iterator cbegin() const { return arr_; }
  const_iterator cend() const { return arr_ + size_; }

  reverse_iterator rbegin() { return reverse_iterator(end()); }
  reverse_iterator rend() { return reverse_iterator(begin()); }

  const_reverse_iterator rbegin() const {
    return const_reverse_iterator(end());
  }
  const_reverse_iterator rend() const {
    return const_reverse_iterator(begin());
  }

  const_reverse_iterator crbegin() const {
    return const_reverse_iterator(end());
  }
  const_reverse_iterator crend() const {
    return const_reverse_iterator(begin());
  }

private:
  int *arr_{nullptr}; // Wskaźnik do dynamicznej tablicy
  int size_{};        // Rozmiar tablicy
  int capacity_{};    // Pojemność tablicy

  // Prywatna metoda do zmiany rozmiaru tablicy
  void resize(int capacity) {
    int *temp = new int[capacity]; // Nowa większa tablica
    for (int i{0}; i < size_; ++i) {
      temp[i] = arr_[i]; // Przekopiowanie elementów do nowej tablicy
    }
    delete[] arr_; // Zwalnianie starej pamięci
    arr_ = temp;   // Przypisanie nowej tablicy
    temp = nullptr;
  }

  // Prywatna metoda do rotacji elementów o jeden w lewo
  void rotateByOne() {
    if (size_ < 1) {
      throw std::out_of_range("There is no items in your Array!\n");
    }
    int temp = arr_[0]; // Zapisz pierwszy element
    for (int i{1}; i < size_; ++i) {
      arr_[i - 1] = arr_[i]; // Przesuń wszystkie elementy w lewo
    }
    arr_[size_ - 1] = temp; // Przenieś pierwszy element na koniec
  }
};

int main() {
  // Przykładowe użycie klasy Array
  Array a1{1, 2, 3, 4, 5, 6, 7}; // Inicjalizacja za pomocą listy
  std::cout << a1.size() << " " << a1.capacity() << '\n';
  a1[1] = 99;              // Modyfikacja wartości elementu
  a1.append(999);          // Dodanie nowego elementu na końcu
  a1.at(2) = 77;           // Modyfikacja elementu przez funkcję at()
  std::cout << a1 << '\n'; // Wyświetlenie tablicy
  // Więcej operacji...

  return 0;
}
