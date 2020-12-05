// Copyright 2020 GHA Test Team

#include "Fraction.h"

#include <iostream>

int main() {
	Fraction a(2, 4);
	std::cout << a.getNumerator() << std::endl;
	std::cout << a.getDenominator() << std::endl;
	a.normalize();
	std::cout << a.getValue() << std::endl;
	Fraction b(3, 8), c;
	c = a / b;
	std::cout << c.getValue() << std::endl;
	c = a * b;
	std::cout << c.getValue() << std::endl;
	c = a + b;
	std::cout << c.getValue() << std::endl;
	c = a - b;
	std::cout << c.getValue() << std::endl;
	return 0;
}
