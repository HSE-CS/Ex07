// Copyright 2020 Kuznetsov Mikhail
#include "Fraction.h"
#include <iostream>

int main() {
  Fraction frac_1(56, -7);
  std::cout << frac_1.getValue() << std::endl;  // "-8/1"
  Fraction frac_2 = frac_1;
  std::cout << frac_2.getValue() << std::endl;  // "-8/1"
  Fraction frac_3;
  std::cout << frac_3.getValue() << std::endl;  // "0/1"
  Fraction frac_4(43, -49);
  std::cout << frac_4.getValue() << std::endl;  // "-43/49"
  Fraction frac_5(frac_4);
  std::cout << frac_5.getValue() << std::endl;  // "-43/49"
  Fraction mult{frac_1 + frac_5};
  std::cout << mult.getValue() << std::endl;  // "-435/49"
  std::cout << mult.getNumerator() << std::endl;  // "-435"
  std::cout << mult.getDenominator() << std::endl;  // "49"
  Fraction div{frac_3 / frac_2};
  std::cout << div.getValue() << std::endl;  // "0/1"
  std::cout << div.getNumerator() << std::endl;  // "0"
  std::cout << div.getDenominator() << std::endl;  // "1"
  Fraction sum{div + mult};
  std::cout << sum.getValue() << std::endl;  // "-435/49"
  Fraction frac_6(18, -3);
  Fraction diff = sum - frac_6;
  std::cout << diff.getValue() << std::endl;  // "-141/49"
  Fraction frac_7(-1, 7);
  mult = frac_7 * frac_7;
  std::cout << mult.getValue() << std::endl;  // "1/49"
  sum = frac_4 + mult;
  std::cout << sum.getValue() << std::endl;  // "-6/7"
  std::cout << sum.getNumerator() << std::endl;  // "-6"
  std::cout << sum.getDenominator() << std::endl;  // "7"
  /*
  div = mult / div;
  terminate called after throwing an instance of 'std::runtime_error' what():  Division by zero!
  */
  return 0;
}

