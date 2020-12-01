// Copyright 2020 Pasmanik Irina
#include "Fraction.h"

int main() {
    Fraction a(1, 2);
    Fraction b(1, 3);
	
    Fraction c;
    std::cout << c.getNumerator() << std::endl;
    std::cout << c.getDenominator() << std::endl;
	
    c = a + b;
    std::cout << c.getValue() << std::endl;
	
    c = a - b;
    std::cout << c.getValue() << std::endl;

    c = a * b;
    std::cout << c.getValue() << std::endl;

    c = a / b;
    std::cout << c.getValue() << std::endl;

    c = a;
    std::cout << c.getValue() << std::endl;

    return 0;
}
