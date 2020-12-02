  // Copyright 2020 Nikolaev Ivan


#include <iostream>
#include "Fraction.h"

int main() {
    Fraction fraction1(3, 5);
    Fraction fraction2(3, 15);

    std::cout << "F1 = " << fraction1.getValue() << std::endl;
    std::cout << "F2 = " << fraction2.getValue() << std::endl;

    std::cout << "F1 + F2 = " << (fraction1 + fraction2).getValue()
        << std::endl;
    std::cout << "F1 - F2 = " << (fraction1 - fraction2).getValue()
        << std::endl;


    return 0;
}
