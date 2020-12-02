  // Copyright 2020 Nikolaev Ivan
#include <iostream>
#include "Fraction.h"
int main() {
    Fraction newFraction = Fraction(20, 5);
    std::cout << newFraction.getValue() << "\n";
    Fraction newFraction2 = Fraction(11, 2);
    std::cout << newFraction2.getValue() << "\n";
    newFraction2 = newFraction2 - newFraction;
    std::cout << newFraction2.getValue() << "\n";
}
