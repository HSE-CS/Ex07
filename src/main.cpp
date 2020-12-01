// Copyright 2020 Bekusov Mikhail

#include "Fraction.h"

#include <iostream>

int main() {
    Fraction a(-15, 1);
    std::cout << a.getNumerator() << std::endl;
    std::cout << a.getDenominator() << std::endl;
    std::cout << a.getValue() << std::endl << std::endl;
    Fraction d(15, 10);
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl << std::endl;
    d = Fraction(15, 5);
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl << std::endl;
    a = Fraction(3, 5);
    Fraction b(2, 3);
    std::cout << b.getValue() << std::endl << std::endl;
    std::cout << (a + b).getValue() << std::endl;
    std::cout << (a - b).getValue() << std::endl;
    std::cout << (a * b).getValue() << std::endl;
    std::cout << (a / b).getValue() << std::endl;

    Fraction z(b);

    std::cout << z.getNumerator() << std::endl;
    std::cout << z.getDenominator() << std::endl;

}
