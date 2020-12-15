//
// Created by stoja on 15.12.2020.
//

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