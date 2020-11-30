// Copyright 2017 Stanislav Stoianov

#include <iostream>
#include "../include/Fraction.h"

int main() {
  Fraction fraction1(4, 7);
  const Fraction &fraction2(fraction1);
  Fraction fraction3;
  std::cout << fraction3.getNumerator()
            << " / " << fraction3.getDenominator() << std::endl;
  fraction3 = fraction1 + fraction2;
  std::cout << fraction3.getValue() << std::endl;
  return 0;
}
