// Copyright 2020 _
#include <iostream>

#include "Fraction.h"

int main() {
  Fraction a(1, 2);  // 1/2
  Fraction b(a);
  Fraction c;
  std::cout << c.getValue() << std::endl;  // 0
  c = a + b;
  std::cout << c.getValue() << std::endl;  // 1

  std::cout << (c + b * a / a +
                b * c * a / b * c * (a + b + b + c) / (a + c * c * c + a))
                   .getValue()
            << std::endl;

  return 0;
}