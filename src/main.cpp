// Copyright [2020] <Olesya Nikolaeva>

#include "Fraction.h"

int main() {
    Fraction a(-16, 20);
    std::cout << a.getValue() << std::endl;
    Fraction b(5, 5);
    Fraction c = a - b;
    std::cout << c.getValue() << std::endl;
    Fraction d(1, 2);
    Fraction f(d);
    c = d + f;
    std::cout << c.getNumerator() << std::endl;
    std::cout << c.getDenominator() << std::endl;
    Fraction g(1, 2);
    Fraction h(-1, 2);
    c = g + h;
    std::cout << c.getNumerator() << std::endl;
    std::cout << c.getDenominator() << std::endl;
    return 0;
}
