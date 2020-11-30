// Copyright 2020 Egor Buzanov
#include "../include/Fraction.h"

int main() {
  Fraction a(1, 2);
  Fraction b(a);
  Fraction c;
  std::cout << a.getValue() << " " << b.getValue() << " " << c.getValue()
            << std::endl;
  std::cout << a.getNumerator() << a.getDenominator() << std::endl;
  c = a + b;
  std::cout << c.getValue() << std::endl;
  c = a - b;
  std::cout << c.getValue() << std::endl;
  c = a * b;
  std::cout << c.getValue() << std::endl;
  c = a / b;
  std::cout << c.getValue() << std::endl;
  c = a;
  std::cout << c.getValue() << std::endl;
  return 0;
}