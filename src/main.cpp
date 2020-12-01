#include "Fraction.h"
#include <iostream>

int main()
{
	Fraction a{1, 2};
	std::cout << a.getNumerator() << " " << a.getDenominator() << std::endl;

	Fraction b {a};
	std::cout << b.getNumerator() << " " << b.getDenominator() << std::endl;

	Fraction c;
	c = b;
	std::cout << c.getNumerator() << " " << c.getDenominator() << std::endl;

	c = a + b;
	std::cout << c.getNumerator() << " " << c.getDenominator() << std::endl;

	Fraction d{1, 2};
	c = a - d;
	std::cout << c.getNumerator() << " " << c.getDenominator() << std::endl;

	c = a * d;
	std::cout << c.getNumerator() << " " << c.getDenominator() << std::endl;

	c = a / d;
	std::cout << c.getNumerator() << " " << c.getDenominator() << std::endl;

	std::cout << a.getValue() << std::endl;

	return 0;
}