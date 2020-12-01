// Copyright 2020 SharunovEvgenya
//
// Created by sharg on 01.12.2020.
//
#include <iostream>
#include "Fraction.h"

int main() {
    Fraction firstFr;
    std::cout << firstFr.getNumerator() << " " << firstFr.getDenominator() << std::endl;
    std::cout << firstFr.getValue() << std::endl;
    Fraction secondFr(2, 4);
    Fraction threeFr(firstFr);
    firstFr = secondFr + threeFr;
    std::cout << firstFr.getValue() << std::endl;
    threeFr = firstFr * secondFr;
    std::cout << threeFr.getValue() << std::endl;
    threeFr = secondFr / threeFr;
    std::cout << threeFr.getValue() << std::endl;
    return 0;
}
