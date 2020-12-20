#include <iostream>
#include "Fraction.h"

int main() {
    Fraction a(1, 5);
    Fraction b(1, 2);
    Fraction c;
    c = a / b;
    std::cout << c.getNumerator() << std::endl;
    std::cout << c.getDenominator() << std::endl;
    return 0;
}
