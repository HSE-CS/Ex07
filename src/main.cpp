#include<iostream>
#include "Fraction.h"

int main() {
	Fraction fst(1, 5);
	Fraction scnd(1, 2);
	std::cout << scnd.getNumerator() << '\n';
	std::cout << scnd.getDenominator() << '\n';
	fst.normalize();
	std::cout << fst.getValue() << '\n';
	std::cout << (fst / scnd).getValue() << '\n';
}