// Copyright 2020 Konina Tatiana

#include "Fraction.h"

int main() {
	Fraction a;
	std::cout << a.getNumerator() << " - 0 " << a.getDenominator() << " - 1" << std::endl;
	Fraction a2(1, 2);
	std::cout << a2.getNumerator() << " - 1 " << a2.getDenominator() << " - 2" << std::endl;
	Fraction a3(1, 2);
	Fraction b3(a3);
	std::cout << b3.getNumerator() << " - 1 " << b3.getDenominator() << " - 2" << std::endl;
	Fraction a4(1, 2);
	Fraction b4(a4);
	Fraction c4;
	c4 = a4 + b4;
	std::cout << c4.getNumerator() << " - 1 " << c4.getDenominator() << " - 1" << std::endl;
	Fraction a5(1, 2);
	Fraction b5(-1, 2);
	Fraction c5;
	c5 = a5 + b5;
	std::cout << c5.getNumerator() << " - 0 " << c5.getDenominator() << " - 1" << std::endl;
	Fraction a6(1, 2);
	Fraction b6(1, 2);
	Fraction c6;
	c6 = a6 - b6;
	std::cout << c6.getNumerator() << " - 0 " << c6.getDenominator() << " - 1" << std::endl;
	Fraction a7(1, 3);
	Fraction b7(2, 3);
	Fraction c7;
	c7 = a7 + b7;
	std::cout << c7.getNumerator() << " - 1 " << c7.getDenominator() << " - 1" << std::endl;
	Fraction a8(1, 2);
	Fraction b8(1, 2);
	Fraction c8;
	c8 = a8 * b8;
	std::cout << c8.getNumerator() << " - 1 " << c8.getDenominator() << " - 4" << std::endl;
	Fraction a9(1, 5);
	Fraction b9(1, 2);
	Fraction c9;
	c9 = a9 / b9;
	std::cout << c9.getNumerator() << " - 2 " << c9.getDenominator() << " - 5" << std::endl;
}
