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
    Fraction second_fr(3, 5);
    Fraction three_fr(first_fr);
    first_fr =  second_fr + three_fr;
    std::cout << first_fr.getValue() << std::endl;
    three_fr = first_fr *  second_fr;
    std::cout << three_fr.getValue() << std::endl;
    three_fr = second_fr / three_fr;
    std::cout << three_fr.getValue() << std::endl;
    return 0;
}