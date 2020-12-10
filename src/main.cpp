// Copyright 2020 KostinAndrej
//
// Created by andryjkost on 09.12.2020.
//
#include <iostream>
#include "Fraction.h"

int main() {
    Fraction a(1, 2);
    std::cout << a.getNumerator() << std::endl;
    std::cout << a.getDenominator() << std::endl;
    std::cout << a.getValue() << std::endl;
    Fraction b(3, 5);
    Fraction c(a);
    a =  b + c;
    std::cout << a.getValue() << std::endl;
    c = a *  b;
    std::cout << c.getValue() << std::endl;
    c =  b / c;
    std::cout << c.getValue() << std::endl;
    return 0;
}
