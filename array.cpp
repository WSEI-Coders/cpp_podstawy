#include <algorithm>
#include <array>
#include <cmath>
#include <compare>
#include <complex>
#include <iostream>
#include <memory>
#include <numbers>
#include <optional>
#include <print>
#include <ranges>
#include <set>
#include <unordered_set>
#include <vector>

template <typename T> class Array {
public:
  Array() : size_(0), capacity_(0) { arr_ = new T[capacity_]; }
  Array(const std::initializer_list<T> &il) {
    size_ = il.size();
    capacity_ = 2 * size_;
    arr_ = new T[capacity_];
    std::copy(il.begin(), il.end(), arr_);
  }

  // Konstruktor kopiujący
  Array(const Array &other) : size_(other.size_), capacity_(other.capacity_) {
    arr_ = new T[capacity_];
    std::copy(other.arr_, other.arr_ + size_, arr_);
  }

  // Konstruktor przenoszący
  Array(Array &&other) noexcept
      : size_(other.size_), capacity_(other.capacity_), arr_(other.arr_) {
    other.size_ = 0;
    other.capacity_ = 0;
    other.arr_ = nullptr;
  }

  ~Array() {
    std::cout << "D-tor called\n";
    delete[] arr_;
  }

  // Metody
  void push_back(const T &val) {
    if (size_ >= capacity_) {
      capacity_ = (size_ + 1) * 2;
      resize(capacity_);
    }
    arr_[size_] = val;
    size_++;
  }

  void insert(int idx, const T &val) {
    if (idx >= size_ || idx < 0) {
      throw std::out_of_range("Index out of range\n");
    }

    if (size_ >= capacity_) {
      capacity_ = (size_ + 1) * 2;
      resize(capacity_);
    }

    for (int i{size_}; i > idx; --i) {
      arr_[i] = arr_[i - 1];
    }
    arr_[idx] = val;
    size_++;
  }

  // Getters
  [[nodiscard]] size_t size() const { return size_; }
  [[nodiscard]] size_t capacity() const { return capacity_; }

  // Methods
  [[nodiscard]] const T &at(const int &idx) const {
    if (idx >= size_ || idx < 0) {
      throw std::out_of_range("Index out of range\n");
    }
    return arr_[idx];
  }
  [[nodiscard]] T &at(const int &idx) {
    if (idx >= size_ || idx < 0) {
      throw std::out_of_range("Index out of range\n");
    }
    return arr_[idx];
  }

  T &operator[](size_t idx) { return arr_[idx]; }
  const T &operator[](size_t idx) const { return arr_[idx]; }

  // Algorithms
  [[nodiscard]] std::optional<size_t> find_index(const T &val) {
    for (size_t i{0}; i < size_; ++i) {
      if (arr_[i] == val) {
        return i;
      }
    }
    return std::nullopt;
  }

private:
  T *arr_{nullptr};
  size_t size_{};
  size_t capacity_{};

  void resize(size_t capacity) {
    T *temp = new T[capacity];
    for (int i{0}; i < size_; ++i) {
      temp[i] = arr_[i];
    }
    delete[] arr_;
    arr_ = temp;
    temp = nullptr;
  }
};

template <typename Type>
std::ostream &operator<<(std::ostream &out, const Array<Type> &a) {
  for (size_t i{0}; i < a.size(); ++i) {
    out << a[i] << ' ';
  }
  return out;
}

int main() {
  Array<double> a1;
  a1.push_back(1.5);
  a1.push_back(2.5);
  a1.push_back(3.5);
  std::cout << a1 << '\n';

  // // Łatwe
  std::cout << a1.size() << '\n';
  std::cout << a1.capacity() << '\n';

  // Średnio-trudne
  std::cout << a1.at(0) << '\n';
  a1.at(0) = 99;
  std::cout << a1.at(0) << '\n';

  // Trudne
  a1.insert(1, 42);
  std::cout << a1 << '\n';

  auto val = a1.find_index(42);
  if (val.has_value()) {
    std::cout << "Val: " << *val << '\n';
  }

  auto a2 = std::move(a1);
  std::cout << a2 << '\n';
  std::cout << a1.size() << '\n';

  // Operator przypisania kopiującego
  a1 = a2;
  // Operator przypisania przenoszącego
  a1 = std::move(a2);
  // std::vector<int> numbers = {10, 20, 30, 40, 50};
  // auto it = numbers.begin();
  // auto it = std::find(numbers.begin(), numbers.end(), 30);
  // if (it != numbers.end()) {
  //   std::cout << *it << '\n';
  //   std::cout << std::distance(numbers.begin(), it) << '\n';
  // }
}
