// Copyright 2020 Bugrov

#include <iostream>

#include "Fraction.h"

int main() {
	Fraction fr1(0, 1);
	std::cout << fr1.getNumerator() << '\n';
	std::cout << fr1.getDenominator() << '\n';
	std::cout << fr1.getValue() << '\n';

	Fraction fr2(fr1);
	std::cout << fr2.getValue() << '\n';
	
	Fraction fr3(3, 1);
	Fraction fr4(9, 2);
	
	fr1 = fr3;
	std::cout << fr1.getValue() << '\n';
	std::cout << (fr3 + fr4).getValue() << '\n';
	std::cout << (fr3 - fr4).getValue() << '\n';
	std::cout << (fr3 * fr4).getValue() << '\n';
	std::cout << (fr3 / fr4).getValue() << '\n';

	return 0;
}