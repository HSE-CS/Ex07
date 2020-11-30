#include <iostream>
#include <string>
#include "Fraction.h"
int main()
{
    Fraction a(1, 2);
    Fraction b(a);
    Fraction c;
    Fraction d;
    Fraction e;
    Fraction f;
    c = a + b;
    d = a * b;
    e = a - d;
    f = d / a;
    std::cout << c.getNumerator() << "  " << c.getDenominator() << std::endl;
    std::cout << d.getNumerator() << "  " << d.getDenominator() << std::endl;
    std::cout << e.getNumerator() << "  " << e.getDenominator() << std::endl;
    std::cout << f.getNumerator() << "  " << f.getDenominator() << std::endl;
}
