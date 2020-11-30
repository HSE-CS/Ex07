// Copyright 2020 <Jiiijyyy>
#include "Fraction.h"


int main() {
    Fraction num;
    std::cout << num.getValue() << std::endl;
    Fraction a(3, 9);
    std::cout << a.getNumerator() << std::endl;
    std::cout << a.getDenominator() << std::endl;
    std::cout << a.getValue() << std::endl;
    std::cout << std::endl;
    Fraction b(a);
    std::cout << b.getNumerator() << std::endl;
    std::cout << b.getDenominator() << std::endl;
    std::cout << b.getValue() << std::endl;
    std::cout << std::endl;
    Fraction c(1, 2);
    std::cout << c.getNumerator() << std::endl;
    std::cout << c.getDenominator() << std::endl;
    std::cout << c.getValue() << std::endl;
    std::cout << std::endl;
    Fraction d = a + b;
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl;
    std::cout << std::endl;
    d = a - b;
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl;
    std::cout << std::endl;
    d = a * b;
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl;
    std::cout << std::endl;
    d = a / b;
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl;
    std::cout << std::endl;
    d = a + c;
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl;
    std::cout << std::endl;
    d = b - c;
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl;
    std::cout << std::endl;
    d = a * c;
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl;
    std::cout << std::endl;
    d = b / c;
    std::cout << d.getNumerator() << std::endl;
    std::cout << d.getDenominator() << std::endl;
    std::cout << d.getValue() << std::endl;
    std::cout << std::endl;
    return 0;
}
