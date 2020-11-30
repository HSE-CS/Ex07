// Copyright 2020 test
#include "../include/Fraction.h"
//#include "Fraction.h"

int main() {
    Fraction a(1, 2);
    Fraction b(-1,3);
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
