// Copyright 2020 VarginDimitry
#include "Fraction.h"
#include <iostream>

int main() {
    Fraction f1(10, 20);
    std::cout << "Value of f1: "<< f1.getValue() << std::endl;
    Fraction f2(11, 21);
    std::cout << "Value of f2: "<< f2.getValue() << std::endl;
    Fraction f3 = f1 + f2;
    std::cout << "Value of f3(f1+f2): "<< f3.getValue() << std::endl;
    f3 = f1 / f2;
    std::cout << "Value of f3(f1/f2): "<< f3.getValue() << std::endl;

    return 0;
}
