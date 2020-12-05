// Copyright 2020 Dumarevskaya
#include "Fraction.h"

int main() {
  Fraction a(1, 2);
  Fraction b(-1, 2);
  Fraction c, d;
  d = a * b;
  std::cout << d.getNumerator() << std::endl << d.getDenominator() << std::endl;
  a = b;
  c = a / b;
  std::cout << c.getValue() << std::endl;
  return 0;
}
