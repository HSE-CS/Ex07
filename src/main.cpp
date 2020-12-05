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
	Fraction s(1, 3), t(2, 3), w;
	w = s - t;
	std::cout << w.getNumerator() << std::endl;
	std::cout << w.getDenominator() << std::endl;
	return 0;
}
