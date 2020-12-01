// Copyright 2020 jswark

#include "Fraction.h"
#include <iostream>

int main() {
  Fraction a(1, 2);
  std::cout << a.getValue() << std::endl;  // 1/2
  Fraction b(a);
  Fraction c;
  std::cout << c.getValue() << std::endl;  // 0
  c = a + b;
  std::cout << c.getValue() << std::endl;  // 1
  Fraction a1(1, 5);
  Fraction b1(1, 2);
  Fraction c1;
  c1 = a1 / b1;
  std::cout << c1.getValue() << std::endl;  // 2/5
  Fraction a2(-5, 2);
  std::cout << a2.getValue() << std::endl;  // -1/2
  Fraction a3(1, 2);
  Fraction b3(1, 2);
  Fraction c3;
  c3 = a3 - b3;
  std::cout << c3.getNumerator() << c3.getDenominator() << std::endl;  // 0 1
  return 0;
}
