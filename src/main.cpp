// Copyright 2020 Ex07 TiNa
#include "Fraction.h"
#include <iostream>

int main() {
  Fraction first(2, 4);
  Fraction second(3, 5);
  Fraction third;
  std::cout << "first = " << first.getValue() << std::endl;
  std::cout << "first Numerator = " << first.getNumerator() << std::endl;
  std::cout << "first Denominator = " << first.getDenominator() << std::endl;
  std::cout << "second = " << second.getValue() << std::endl;
  third = first + second;
  std::cout << "first + second = " << third.getValue() << std::endl;
  third = second - first;
  std::cout << "second - first = " << third.getValue() << std::endl;
  third = second * first;
  std::cout << "second * first = " << third.getValue() << std::endl;
  third = second / first;
  std::cout << "second / first = " << third.getValue() << std::endl;
  return 0;
}
