// Copyright 2020 Bekina Svetlana
#include <iostream>
#include <exception>
#include <string>
#include "Fraction.h"

int main() {
    try {
        Fraction a(1, 5);
        Fraction b(2, 4);
        Fraction c;
        c = a - b;
        std::cout << b.getNumerator() << std::endl;
        std::cout << b.getDenominator() << std::endl;
        std::cout << c.getValue() << std::endl;
        std::cout << b.getValue() << std::endl;
        std::cout << a.getValue() << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
