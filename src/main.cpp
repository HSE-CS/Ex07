// Created by Алексей Трутнев on 01.12.2020.

#include "Fraction.h"

int main() {
    Fraction a(2, -5);
    Fraction b(1, 3);
    Fraction c;
    Fraction h;

    c = a + b;
    h = a * b;

    std::cout << c.getValue() << std::endl;
    std::cout << c.getNumerator() << std::endl;
    std::cout << c.getDenominator() << std::endl;
    std::cout << std::endl;

    std::cout << h.getValue() << std::endl;
    std::cout << h.getNumerator() << std::endl;
    std::cout << h.getDenominator() << std::endl;
    std::cout << std::endl;

    std::cout << (c + h).getValue() << std::endl;
    std::cout << (c - h).getValue() << std::endl;
    std::cout << (c * h).getValue() << std::endl;
    std::cout << (c / h).getValue() << std::endl;
    std::cout << (a / b).getValue() << std::endl;
    return 0;
}
