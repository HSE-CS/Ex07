#include <iostream>
#include "Fraction.h"
int main() {
    Fraction a(1, 10);
    std::cout << "Numerator a\n" << a.getNumerator() << "\nDenominator a\n" << a.getDenominator() << "\nValue a\n" << a.getValue();
    Fraction b(1, 5);
    std::cout << "\nNumerator b\n" << b.getNumerator() << "\nDenominator b\n" << b.getDenominator() << "\nValue b\n" << b.getValue();
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
    std::cout << "\nValue c\n" << c.getValue() << "\nValue d\n" << d.getValue() << "\nValue e\n" << e.getValue() << "\nValue f\n" << f.getValue() << "\nValue g\n" << g.getValue();
    return 0;
}