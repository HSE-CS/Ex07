// Copyright 2020 Nikita Kasyanov

#include <iostream>
#include "../include/Fraction.h"

int main() {
    Fraction frac1(-2, 5);
    Fraction frac2(frac1);
    std::cout << frac2.getNumerator() << '\n';
    std::cout << frac2.getDominator() << '\n';
    std::cout << frac2.getValue() << '\n';
    Fraction frac3(10, 30);
    frac2 = frac3;
    std::cout << frac2.getValue() << '\n';
    std::cout << (frac1 + frac2).getValue() << '\n';
    std::cout << (frac1 - frac2).getValue() << '\n';
    std::cout << (frac1 * frac2).getValue() << '\n';
    std::cout << (frac1 / frac2).getValue() << '\n';
    return 0;
}
