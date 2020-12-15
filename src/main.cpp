// Copyright 2020 Stolbov Yaroslav

#include "Fraction.h"

int main() {
    Fraction a(1, 2);
    Fraction b(a);
    Fraction c;
    std::cout << c.getValue() << std::endl;
    c = a + b;
    std::cout << c.getValue() << std::endl;
    c = a - b;
    std::cout << c.getValue() << std::endl;
    c = a * b;
    std::cout << c.getValue() << std::endl;
    c = a / b;
    std::cout << c.getValue() << std::endl;
    c = a;
    std::cout << c.getValue() << std::endl;
    return 0;
}