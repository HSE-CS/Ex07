// Copyright 2020 Alexander Shirokov

#include <iostream>
#include "Fraction.h"

int main() {
  Fraction a(1, 2);
  Fraction b(a);
  Fraction c;
  std::cout << c.getValue() << '\n';
  c = a + b;
  std::cout << c.getValue() << '\n';
  c = a - b;
  std::cout << c.getValue() << '\n';
  c = a * b;
  std::cout << c.getValue() << '\n';
  c = a / b;
  std::cout << c.getValue() << '\n';
  c = b;
  std::cout << c.getValue();
}
