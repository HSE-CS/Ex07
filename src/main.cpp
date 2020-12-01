// Copyright 2020 Shelby Ltd.
#include <iostream>
#include "Fraction.h"

int main() {
  Fraction f1(1, 4);
  std::cout << f1.getValue() << std::endl;
  Fraction f2 = f1;
  std::cout << f2.getValue() << std::endl;
  Fraction f3 = f1 + f2;
  std::cout << f3.getValue() << std::endl;
  Fraction f4 = f2 - f3;
  std::cout << f4.getValue() << std::endl;
  f4 = f3 * f2;
  std::cout << f4.getValue() << std::endl;
  f4 = f3 / f2;
  std::cout << f4.getValue() << std::endl;
  return 0;
}
