#include <iostream>
#include "Fraction.h"
int main() {
	Fraction newFraction = Fraction(14, 7);
	std::cout << newFraction.getValue() << "\n";
	Fraction newFraction2 = Fraction(77, 22);
	std::cout << newFraction2.getValue() << "\n";
	newFraction2 = newFraction2 - newFraction;
	std::cout << newFraction2.getValue() << "\n";
}