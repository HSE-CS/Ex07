// Copyright [2020] <Balayan Roman>

#include <iostream>
#include "../include/Fraction.h"

int main() {
	int num = 1;
	int denom = 3;
	Fraction a(num, denom);
	std::cout << "\na = " << a.getValue() << std::endl;
	Fraction b;
	std::cout << "b = " << b.getValue() << std::endl;
	Fraction c = a - b;
	std::cout << "c = " << c.getValue() << std::endl;
	std::cout << "a = " << a.getValue() << std::endl;
	c = a;
	std::cout << "c = " << c.getValue() << std::endl;
	Fraction d(c);
	d = d * b;
	std::cout << "d = " << d.getValue();
}

