// Copyright 2020 ArinaMonicheva
#include <iostream>
#include "Fraction.h"

int main() {
  Fraction frac1;
  Fraction frac2(16, 18);
  Fraction frac3(frac2);

  std::cout << frac1.getValue() << std::endl;
  std::cout << frac2.getValue() << std::endl;
  std::cout << frac3.getValue() << std::endl;
  std::cout << frac2.getNumerator() << std::endl;
  std::cout << frac2.getDenominator() << std::endl;

  Fraction frac4(-2, 3);
  Fraction frac5(-2, -3);
  std::cout << frac4.getValue() << std::endl;
  std::cout << frac5.getValue() << std::endl;

  Fraction frac6(3, 1);
  std::cout << frac6.getValue() << std::endl;

  frac1 = frac6 + frac2;
  std::cout << frac1.getValue() << std::endl;

  frac1 = frac6 - frac2;
  std::cout << frac1.getValue() << std::endl;

  frac1 = frac2 - frac6;
  std::cout << frac1.getValue() << std::endl;

  frac1 = frac6 * frac2;
  std::cout << frac1.getValue() << std::endl;

  frac1 = frac6 / frac2;
  std::cout << frac1.getValue() << std::endl;

  return 0;
}
