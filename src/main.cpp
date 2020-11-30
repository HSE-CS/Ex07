// Copyright 2020 Nikita Naumov
#include "Fraction.h"


int main() {
    Fraction a(-1, 2);
    Fraction b(3, 4);
    Fraction c;

    std::cout << "Demonstration of method getValue()" << std::endl;

    std::cout << a.getValue();
    std::cout << std::endl;

    std::cout << b.getValue();
    std::cout << std::endl;

    std::cout << c.getValue();
    std::cout << std::endl;

    std::cout << "Demonstration of method getNumerator()" << std::endl;

    std::cout << a.getNumerator();
    std::cout << std::endl;

    std::cout << b.getNumerator();
    std::cout << std::endl;

    std::cout << c.getNumerator();
    std::cout << std::endl;

    std::cout << "Demonstration of method getDenominator()" << std::endl;

    std::cout << a.getDenominator();
    std::cout << std::endl;

    std::cout << b.getDenominator();
    std::cout << std::endl;

    std::cout << c.getDenominator();
    std::cout << std::endl;

    std::cout << "Check of correct working of operation overload" << std::endl;

    c = a + b;
    std::cout << c.getValue() << std::endl;

    c = a - b;
    std::cout << c.getValue() << std::endl;

    c = a * b;
    std::cout << c.getValue() << std::endl;

    c = a / b;
    std::cout << c.getValue() << std::endl;

    return 0;
}
