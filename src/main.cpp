//Copyright 2020 Lukicheva Polina
#include "Fraction.h"
#include <iostream>

int main() {
	Fraction a(1, 0); // 1/2
	Fraction b(a);
	Fraction c(5, 6);
	std::cout << c.getValue() << std::endl;
	std::cout << c.getValue() << std::endl;
	std::cout << (a + c).getValue();
	return 0;
}