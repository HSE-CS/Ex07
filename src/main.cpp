//Copyright 2020 Uskova

#include "Fraction.h"
#include <iostream>

int main()
{
    Fraction a(1, 2); // 1/2
    Fraction b(a);
    Fraction c;
    std::cout << c.getValue() << std::endl; // 0
    c = a + b;
    std::cout << c.getValue() << std::endl; // 1
    Fraction b1(-1, 2);
    c = a + b1;
    std::cout << c.getValue() << std::endl; // 0
    Fraction a2(1, 5);
    Fraction b2(1, 2);
    Fraction c2;
    c2 = a2 / b2;
    std::cout << c2.getValue() << std::endl;
    return 0;
}
