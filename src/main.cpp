// Copyright 2020 Igor Tyulin
#include "Fraction.h"

int main() {
    Fraction a(4, 2);
    Fraction b(-1, 3);
    Fraction c;
    c = a + b;
    std::cout << c.getValue() << std::endl;
    std::cout << c.getNumerator() << std::endl;
    std::cout << c.getDenominator() << std::endl;
    std::cout << (b + a).getValue() << std::endl;
    std::cout << (b - a).getValue() << std::endl;
    std::cout << (b * a).getValue() << std::endl;
    std::cout << (b / a).getValue() << std::endl;
    return 0;
}
