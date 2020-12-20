// Copyright 2020 TimurZaytsev
#include <iostream>
#include "Fraction.h"
int main() {
    Fraction fr3;
    std::cout << fr3.getNumerator() << '\n';
    std::cout << fr3.getDenominator() << '\n';
    std::cout << fr3.getValue() << '\n';
    Fraction a(1, 5);
    std::cout << a.getNumerator() << '\n';
    std::cout << a.getDenominator() << '\n';
    std::cout << a.getValue() << '\n';
    Fraction b(1, 2);
    std::cout << b.getNumerator() << '\n';
    std::cout << b.getDenominator() << '\n';
    std::cout << b.getValue() << '\n';
    Fraction c;
    c = a;
    std::cout << c.getValue() << '\n';
    c = a + b;
    std::cout << c.getValue() << '\n';
    c = a - b;
    std::cout << c.getValue() << '\n';
    c = a * b;
    std::cout << c.getValue() << '\n';
    c = a / b;
    std::cout << c.getValue() << '\n';
    Fraction a1(1, 2);
    Fraction b1(1, 2);
    Fraction c1;
    c1 = a1 - b1;
    std::cout << c1.getNumerator() << '\n';
    std::cout << c1.getDenominator() << '\n';
    return 0;
}
