// Copyright 2020 GHA Test Team
#include "Fraction.h"
#include <iostream>


int main() {
	Fraction a(-1, 2), b(3, 4), c;
	//std::cout << a.getNumerator() << std::endl;
	//std::cout << a.getDenominator() << std::endl;
	std::cout << "a: " << a.getValue() << std::endl;
	std::cout << "b: " << b.getValue() << std::endl;
	// plus
	c = a + b;
	std::cout << "c: " << c.getValue() << std::endl;
	// minus
	c = a - b;
	std::cout << "c: " << c.getValue() << std::endl;
	// multiply
	c = a * b;
	std::cout << "c: " << c.getValue() << std::endl;
	// divide
	c = a / b;
	std::cout << "c: " << c.getValue() << std::endl;
	return 0;
}
