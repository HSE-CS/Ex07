// Copyright 2020 mkhorosh
#include "Fraction.h"
#include <iostream>

int main() {
  Fraction a;
  std::cout << a.getNumerator() << std::endl;
  std::cout << a.getDenominator() << std::endl;
  Fraction b(10, 11);
  std::cout << b.getValue() << std::endl;
  Fraction c;
  c = a + b;
  std::cout << c.getValue() << std::endl;
}
