// Copyright 2020 Dev-will-work
#include "Fraction.h"
#include <iostream>

int main() {
  Fraction fract;
  Fraction another(4, 45);
  Fraction test(2, 3);
  Fraction bad(5, 0);
  std::cout << fract.getDenominator() << std::endl;
  std::cout << fract.getNumerator() << std::endl;
  std::cout << fract.getValue() << std::endl;
  std::cout << (fract + another).getValue() << std::endl;
  std::cout << (fract - another).getValue() << std::endl;
  std::cout << (fract * another).getValue() << std::endl;
  std::cout << (fract / another).getValue() << std::endl;
  std::cout << (fract = another).getValue() << std::endl;
  std::cout << (fract = another = test).getValue() << std::endl;
  std::cout << (fract + bad).getValue() << std::endl;
  std::cout << (fract - bad).getValue() << std::endl;
  std::cout << (fract * bad).getValue() << std::endl;
  std::cout << (fract / bad).getValue() << std::endl;
  std::cout << (fract = bad).getValue() << std::endl;
}
