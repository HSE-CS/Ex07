// Copyright 2020 KostinAndrej
//
// Created by andryjkost on 09.12.2020.
//
#include <iostream>
#include "Fraction.h"

int main() {
    Fraction first_fr;
    std::cout << first_fr.getNumerator() << std::endl;
    std::cout << first_fr.getDenominator() << std::endl;
    std::cout << first_fr.getValue() << std::endl;
    Fraction secondFr(3, 5);
    Fraction threeFr(first_fr);
    first_fr = secondFr + threeFr;
    std::cout << first_fr.getValue() << std::endl;
    threeFr = first_fr * secondFr;
    std::cout << threeFr.getValue() << std::endl;
    threeFr = secondFr / threeFr;
    std::cout << threeFr.getValue() << std::endl;
    return 0;
}