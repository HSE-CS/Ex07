// Copyright 2020 Igumnova Natasha
#include "Fraction.h"

int main() {
  Fraction z(1, 2);  // 1/2
  Fraction x(z);
  Fraction y;
  std::cout << y.getValue() << std::endl;  // 0
  y = z + x;
  std::cout << y.getValue() << std::endl;  // 1
  Fraction a(1, 3);
  Fraction b(2, 3);
  Fraction c;
  c = a + b;
  std::cout << c.getNumerator() << std::endl;
  std::cout << c.getDenominator() << std::endl;
  std::cout << c.getValue() << std::endl;
}
