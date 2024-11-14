#pragma once

#include <iostream>

/**
 * Szablon funkcji `sumTwo` przyjmuje dwa argumenty dowolnego typu `T` i zwraca
 * ich sumę. Dzięki zastosowaniu szablonów funkcja jest uniwersalna i działa z
 * różnymi typami danych.
 *
 * @param a Pierwsza wartość do sumowania
 * @param b Druga wartość do sumowania
 * @return Suma wartości `a` i `b`
 */
template <class T> inline T sumTwo(const T &a, const T &b) { return a + b; }
