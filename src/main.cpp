// Copyright 2020 Tatsenko Alexey
#include<iostream>
#include"Fraction.h"

int main() {
    Fraction x(1, 2);
    Fraction y(2, 2);
    Fraction op1;
    Fraction op2;
    Fraction op3;
    Fraction op4;
    Fraction op5;
    std::cout << x.getValue() << std::endl;
    std::cout << y.getValue() << std::endl;
    std::cout << y.getNumerator() << std::endl;
    std::cout << y.getDenominator() << std::endl;
    op1 = x + y;
    op2 = x - y;
    op3 = x * y;
    op4 = x / y;
    op5 = x = y;
    std::cout << std::endl;
    std::cout << op1.getValue() << std::endl;
    std::cout << op2.getValue() << std::endl;
    std::cout << op3.getValue() << std::endl;
    std::cout << op4.getValue() << std::endl;
    std::cout << op5.getValue() << std::endl;
}
