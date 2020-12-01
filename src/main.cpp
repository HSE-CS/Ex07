// Copyright 2020 stick
#include "Fraction.h"

int main() {
    Fraction a(5, 6);
    Fraction b(-1, 4);
    Fraction c;
    c = a + b;
    std::cout << c.getValue() << "\n";
    std::cout << c.getNumerator() << "\n";
    std::cout << c.getDenominator() << "\n";
    std::cout << (b + a).getValue() << "\n";
    std::cout << (b - a).getValue() << "\n";
    std::cout << (b * a).getValue() << "\n";
    std::cout << (b / a).getValue() << "\n";
    return 0;
}