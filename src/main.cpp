// Copyright 2020 Grachev Alexander

#include "../include/Fraction.h"

int main() {
    Fraction a(3, 9);
    std::cout << a.GetValue() << std::endl;
    Fraction b(a);
    std::cout << b.GetValue() << std::endl;
    std::cout << b.getNumerator() << '/' << b.getDenominator() << std::endl;
    Fraction c, d;
    c = a - b;
    std::cout << c.GetValue() << std::endl;
    d = a * b;
    std::cout << d.GetValue() << std::endl;
    return 0;
}