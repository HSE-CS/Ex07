// Copyright 2020 Nikita Stifeev
#include <iostream>
#include "Fraction.h"

int main() {
    Fraction a(1, 2);
    Fraction b(a);
    Fraction c;
    Fraction d(-2, 6);
    std::cout << "a: " << a.getValue() << std::endl;
    std::cout << "b: " << b.getValue() << std::endl;
    std::cout << "c: " << c.getValue() << std::endl;
    std::cout << "d: " << d.getValue() << std::endl;
    std::cout << "a + d: " << (a + d).getValue() << std::endl;
    std::cout << "a - d: " << (a - d).getValue() << std::endl;
    std::cout << "a * d: " << (a * d).getValue() << std::endl;
    std::cout << "a / d: " << (a / d).getValue() << std::endl;
}
