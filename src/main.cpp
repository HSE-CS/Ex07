// Copyright 2020 Sharibzhanova Diana
#include "Fraction.h"

int main() {
    Fraction a(1, 2);     // 1/2
    Fraction b(a);
    Fraction c;
    std::cout << c.getValue() << std::endl;     // 0
    c = a + b;
    std::cout << c.getValue() << std::endl;     // 1
    c = a - b;
    std::cout << c.getValue() << std::endl;     // 0/4
    c = a * b;
    std::cout << c.getValue() << std::endl;     // 1/4
    c = a / b;
    std::cout << c.getValue() << std::endl;     // 1
    c = a;
    std::cout << c.getValue() << std::endl;     // 1/2
    std::cout << c.getNumerator() << std::endl;     // 1
    std::cout << c.getDenominator() << std::endl;       // 2*
    return 0;
}
