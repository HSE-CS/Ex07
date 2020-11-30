// Copyright 2020 FOM
#include <iostream>
#include "Fraction.h"

int main()
{
    //example
    Fraction a(1, 2); 
    Fraction b(a);
    Fraction c;
    std::cout << c.getValue() << std::endl;
    c = a + b;
    std::cout << c.getValue() << std::endl;
    Fraction number_1(8, 9);
    Fraction number_2(3, 5);
    Fraction number_3;
    number_3 = number_1 + number_2;
    std::cout << number_3.getNumerator() << std::endl;
    std::cout << number_3.getDenominator() << std::endl;
    Fraction number_4(5, 7);
    Fraction number_5(5, 7);
    Fraction number_6;
    number_6 = number_4 - number_5;
    std::cout << number_6.getNumerator() << std::endl;
    std::cout << number_6.getDenominator() << std::endl;
    Fraction number_7(1, 5);
    Fraction number_8(1, 7);
    Fraction number_9;
    number_9 = number_7 * number_8;
    std::cout << number_9.getNumerator() << std::endl;
    std::cout << number_9.getDenominator() << std::endl;
    Fraction number_10(4, 9);
    Fraction number_11(2, 3);
    Fraction number_12;
    number_12 = number_10 / number_11;
    std::cout << number_12.getNumerator() << std::endl;
    std::cout << number_12.getDenominator() << std::endl;
    Fraction number_13;
    Fraction number_14(6, 7);
    Fraction number_15 = number_13 + number_14;
    std::cout << number_15.getValue() << std::endl;
    Fraction number_16;
    std::cout << number_16.getNumerator() << std::endl;
    std::cout << number_16.getDenominator() << std::endl;
    Fraction number_17(4, 6);
    std::cout << number_17.getNumerator() << std::endl;
    std::cout << number_17.getDenominator() << std::endl;
    Fraction number_18(4, 6);
    Fraction number_19(number_18);
    std::cout << number_19.getNumerator() << std::endl;
    std::cout << number_19.getDenominator() << std::endl;
	return 0;
}