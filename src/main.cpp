// Copyright 2020 Smirnov Grigory
#include "Fraction.h"

int main() {
  Fraction a(2, 4);
  Fraction b(-2, 8);
  std::cout << a.getValue() << std::endl << b.getValue() << std::endl;
  Fraction c = a - b;
  std::cout << c.getValue() << std::endl;
  Fraction d = a * b * b - c;
  std::cout << d.getValue() << std::endl << d.getNumerator();
  return 0;
}
