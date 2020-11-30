// Copyright 2020 test
#include "Fraction.h"

int main() {
	Fraction a(-7, 3);
	Fraction b(a);
	Fraction c(3, 4);
	c = c * b;
	std::cout << c.getValue() << "\n";
	std::cout << c.getNumerator() << "\n";
	std::cout << c.getDenominator() << "\n";
	std::cout << (b + a).getValue() << "\n";
	std::cout << (b - a).getValue() << "\n";
	std::cout << (b * a).getValue() << "\n";
	std::cout << (b / a).getValue() << "\n";
	return 0;
}