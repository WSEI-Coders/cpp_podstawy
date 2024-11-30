#include <iostream>
#include <memory>
#include <vector>

// Program demonstruje wykorzystanie wskaźników unikalnych (`std::unique_ptr`)
// oraz zarządzanie zasobami w obiekcie klasy `Player`. Przykład ten obejmuje
// konstrukcję, destrukcję, przenoszenie obiektów i wywołania funkcji
// członkowskich do zarządzania zasobami oraz ich reprezentacji w formie
// statystyk gracza (`PlayerStats`).

// Definicja struktury PlayerStats do przechowywania statystyk gracza
struct PlayerStats {
  int health_{};     // Zdrowie gracza
  int mana_{};       // Mana gracza
  int experience_{}; // Doświadczenie gracza

  // Konstruktor z argumentami do inicjalizacji statystyk
  PlayerStats(int health, int mana, int experience)
      : health_(health), mana_(mana), experience_(experience) {}

  // Rule of 5 (Reguła Pięciu):
  // 1. Destruktor - domyślny, ponieważ `PlayerStats` nie zarządza zasobami
  // dynamicznymi
  ~PlayerStats() = default;

  // 2. Konstruktor kopiujący - domyślny, aby możliwe było kopiowanie
  // `PlayerStats`
  PlayerStats(const PlayerStats &p) = default;

  // 3. Konstruktor przenoszący - domyślny i noexcept, aby móc bezpiecznie
  // przenosić
  PlayerStats(PlayerStats &&p) noexcept = default;

  // 4. Operator przypisania kopiującego - domyślny, aby umożliwić przypisanie
  // kopii
  PlayerStats &operator=(const PlayerStats &p) = default;

  // 5. Operator przypisania przenoszącego - domyślny, pozwalający na
  // przenoszenie
  PlayerStats &operator=(PlayerStats &&p) = default;

  // Konstruktor domyślny
  PlayerStats() = default;

  // Metoda do wyzerowania wszystkich statystyk gracza
  void destroy() {
    health_ = 0;
    mana_ = 0;
    experience_ = 0;
  }
};

// Definicja klasy Player
class Player {
private:
  // Wskaźnik `unique_ptr` do przechowywania statystyk gracza
  std::unique_ptr<PlayerStats> stats_{};
  std::string name_{}; // Nazwa gracza

public:
  // Konstruktor przyjmujący nazwę, zdrowie, manę i doświadczenie
  Player(const std::string &name, int health, int mana, int experience)
      : name_(name),
        stats_(std::make_unique<PlayerStats>(health, mana, experience)) {
    // Wyświetlenie informacji o utworzeniu gracza
    std::cout << "Player " << name_ << " created" << std::endl;
  }

  // Destruktor klasy Player
  ~Player() {
    if (stats_) {
      // Jeśli `stats_` istnieją, to znaczy, że gracz jeszcze nie został
      // zniszczony
      std::cout << "Player " << name_ << " destroyed" << std::endl;
    } else {
      // Jeśli `stats_` jest puste, gracz był już wcześniej "zniszczony"
      std::cout << "Player " << name_ << " already destroyed" << std::endl;
    }
  }

  // Usunięcie kopiowania - konstruktor kopiujący i operator przypisania są
  // zablokowane (zapobiega kopiowaniu graczy)
  Player(const Player &other) = delete;
  Player &operator=(const Player &other) = delete;

  // Konstruktor przenoszący - pozwala na przeniesienie zasobów z innego obiektu
  // `Player`
  Player(Player &&other) noexcept
      : stats_(std::move(other.stats_)), name_(std::move(other.name_)) {
    // Informacja o przeniesieniu obiektu gracza
    std::cout << "Player moved" << std::endl;
  }

  // Operator przypisania przenoszącego
  Player &operator=(Player &&other) noexcept {
    // Sprawdzenie, czy obiekt nie przypisuje sam do siebie
    if (this != &other) {
      std::cout << "Move assignment" << std::endl;
      stats_ = std::move(other.stats_); // Przeniesienie statystyk
      name_ = std::move(other.name_);   // Przeniesienie nazwy gracza
    }
    return *this;
  }

  /*
    WAŻNE!
    Można śmiało usunąć powyższy konstruktor przenoszący oraz operator
    przypisania przenoszącego i odkomentować dwie poniższe linie.
    Więcej opisów poniżej całego kodu po funkcji main()!
  */

  // Player(Player &&p) noexcept = default;
  // Player &operator=(Player &&p) = default;

  // Metoda do wyświetlenia statystyk gracza
  void printPlayerStats() const {
    if (stats_) {
      // Wyświetlenie aktualnych statystyk gracza, jeśli istnieją
      std::cout << "Player " << name_ << " stats: health: " << stats_->health_
                << ", mana: " << stats_->mana_
                << ", exp: " << stats_->experience_ << std::endl;
    } else {
      // Jeśli `stats_` nie istnieje, oznacza to, że gracz nie ma już statystyk
      std::cout << "Player " << name_ << " stats: no stats" << std::endl;
    }
  }
};

// Funkcja główna programu
int main() {
  // Utworzenie obiektu `Player` o nazwie "John" z początkowymi statystykami
  Player p1("John", 5, 10, 15);
  p1.printPlayerStats(); // Wyświetlenie statystyk gracza `p1`

  // Przeniesienie gracza `p1` do `p2`
  Player p2 = std::move(p1);
  p1.printPlayerStats(); // `p1` nie ma już statystyk po przeniesieniu
  p2.printPlayerStats(); // `p2` posiada statystyki pierwotnie należące do `p1`

  // Utworzenie kolejnego gracza o nazwie "Bob"
  Player p3{"Bob", 99, 100, 1001};
  // Przypisanie przenoszące `p3` z obiektu `p2`
  p3 = std::move(p2);

  // Utworzenie wektora graczy i dodanie `p3` za pomocą `emplace_back`
  // (przeniesienie)
  std::vector<Player> players;
  players.emplace_back(std::move(p3));

  // Wyświetlenie statystyk `p3` - powinny być "no stats" po przeniesieniu
  p3.printPlayerStats();
  // Wyświetlenie statystyk gracza w wektorze (pierwotnie `p3`)
  players.at(0).printPlayerStats();

  return 0;
}

/*
Wyjaśnienie! Uwaga, jest obszerne :D

Rule of Five w C++ i Domyślne Przenoszenie Obiektów z std::unique_ptr
  W kontekście nowoczesnego C++, kiedy implementujemy klasy zarządzające
  zasobami, istnieje ważna koncepcja zwana "Regułą Pięciu" (Rule of Five). W tej
  regule, jeśli klasa zarządza zasobami w sposób manualny, powinna implementować
  wszystkie pięć specjalnych funkcji, które obejmują:
      Konstruktor kopiujący,
      Operator przypisania kopiującego,
      Konstruktor przenoszący,
      Operator przypisania przenoszącego,
      Destruktor.

  Jednakże, w nowoczesnym C++ standardowe wskaźniki inteligentne, takie jak
  std::unique_ptr, automatyzują zarządzanie zasobami, co zmienia podejście do
  implementacji wspomnianych metod specjalnych.

Zarządzanie Zasobami z std::unique_ptr
  W std::unique_ptr zarządzanie zasobami jest uproszczone, ponieważ wskaźnik ten
  samodzielnie przejmuje odpowiedzialność za alokację oraz zwalnianie pamięci.
  std::unique_ptr jest wskaźnikiem posiadającym unikalne prawo do zarządzanego
  zasobu, co oznacza, że tylko jeden unique_ptr może zarządzać danym obiektem w
  jednym czasie.

  Przenoszenie std::unique_ptr do innego obiektu odbywa się w sposób
  automatyczny przy użyciu funkcji std::move(). W wyniku tej operacji prawo do
  zarządzanego zasobu jest przekazywane nowemu wskaźnikowi, a wskaźnik źródłowy
  staje się pusty (nullptr). Taka semantyka przenoszenia jest bardzo dobrze
  wspierana przez domyślnie generowane przez kompilator przenoszące operatory
  przypisania oraz przenoszące konstruktory. Ręczna Implementacja vs. Domyślne =
  default.

  W omawianym kodzie klasa Player posiada unikalny wskaźnik stats_ typu
  std::unique_ptr<PlayerStats>, który zarządza dynamicznie alokowanymi
  statystykami gracza. W poniższym fragmencie kodu przedstawiona została ręczna
  implementacja konstruktora przenoszącego oraz operatora przypisania
  przenoszącego:
  '''cpp
  Player(Player &&other) noexcept
    : stats_(std::move(other.stats_)), name_(std::move(other.name_)) {
  std::cout << "Player moved" << std::endl;
  }

  Player &operator=(Player &&other) noexcept {
    if (this != &other) {
      std::cout << "Move assignment" << std::endl;
      stats_ = std::move(other.stats_);
      name_ = std::move(other.name_);
    }
    return *this;
  }
  '''

  W tej implementacji przenoszenie zasobów odbywa się ręcznie, poprzez wywołanie
  std::move() dla wskaźnika stats_ oraz nazwy name_. Takie podejście, choć
  poprawne, jest zbędne, ponieważ kompilator może automatycznie wygenerować te
  metody, spełniając te same wymagania dotyczące przenoszenia zasobów.
  Zamiast ręcznej implementacji, możemy użyć wersji domyślnych za pomocą =
  default:
  ```cpp
  Player(Player &&) noexcept = default;
  Player &operator=(Player &&) noexcept = default;
  ```

Zalety Domyślnych Wersji (= default)
  Zwięzłość i Prostota. Domyślna wersja przenoszących metod jest prostsza w
    zapisie i nie wymaga ręcznego używania std::move(), dzięki czemu kod jest
    bardziej zwięzły i czytelny.
  Bezpieczeństwo. Kompilator generuje konstruktor i
    operator przypisania przenoszącego zgodnie z najlepszymi praktykami,
    zapewniając, że przenoszenie jest przeprowadzane bezpiecznie i wydajnie.
  Redukcja Błędów. Ręczne implementowanie przenoszenia może prowadzić do
    błędów, takich jak przypadkowe zapomnienie o przeniesieniu któregoś z
    zasobów lub wykonanie niepoprawnych operacji na przenoszonych obiektach.
    Korzystanie z = default redukuje to ryzyko, gdyż kompilator zapewnia
    odpowiednie przenoszenie dla wszystkich pól klasy.

Przenoszenie Player z std::unique_ptr
  Ponieważ std::unique_ptr wspiera efektywne przenoszenie (ponieważ jest
  zaprojektowany właśnie do tego celu), domyślnie generowane przez kompilator
  metody przenoszące doskonale spełniają swoje zadanie w przypadku klasy Player.
  Warto zauważyć, że gdy korzystamy z std::unique_ptr, przenoszenie zasobów nie
  wiąże się z kopiowaniem danych, co zapewnia dużą wydajność operacji.

Kiedy Konieczna Jest Ręczna Implementacja?
  Ręczna implementacja konstruktora przenoszącego oraz operatora przypisania
  przenoszącego może być potrzebna, gdy:
    Dodatkowa logika przenoszenia. Chcesz wykonać dodatkowe operacje podczas
      przenoszenia obiektu, na przykład zresetowanie pewnych pól klasy,
      zainicjowanie nowych zasobów, lub zapisanie stanu przenoszonego obiektu.
    Specjalne zarządzanie zasobami: Gdy klasa zarządza zasobami innymi niż
      wskaźniki inteligentne i wymagane jest manualne przeniesienie lub
      zwolnienie pamięci.

  Jednak w przypadku klasy Player, której zasoby są zarządzane przez
  std::unique_ptr, ręczna implementacja nie jest konieczna, ponieważ domyślna
  logika przenoszenia jest wystarczająco efektywna.
*/