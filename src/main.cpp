  // Copyright 2020 BD
#include <iostream>
#include "Fraction.h"
int main() {
    Fraction a(1, 10);
    std::cout << "Numerator a\n" << a.getNumerator();
    std::cout << "\nDenominator a\n" << a.getDenominator();
    std::cout << "\nValue a\n" << a.getValue();
    Fraction b(1, 5);
    std::cout << "\nNumerator b\n" << b.getNumerator();
    std::cout << "\nDenominator b\n" << b.getDenominator();
    std::cout << "\nValue b\n" << b.getValue();
    Fraction c;
    Fraction d;
    Fraction e;
    Fraction f;
    Fraction g;
    c = a;
    d = a + b;
    e = a - b;
    f = a * b;
    g = a / b;
    std::cout << "\nValue c\n" << c.getValue();
    std::cout << "\nValue d\n" << d.getValue();
    std::cout << "\nValue e\n" << e.getValue();
    std::cout << "\nValue f\n" << f.getValue();
    std::cout << "\nValue g\n" << g.getValue();
    return 0;
}
