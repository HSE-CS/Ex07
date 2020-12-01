// Copyright 2020 Ryzhova
#include "Fraction.h"

int main() {
  Fraction a(1, 2);
  Fraction b(a);
  Fraction c;
  std::cout << c.getValue();
  c = a + b;
  std::cout << c.getValue();
  c = a - b;
  std::cout << c.getValue();
  c = a * b;
  std::cout << c.getValue();
  c = a / b;
  std::cout << c.getValue();
  c = a;
  std::cout << c.getValue();
  return 0;
}
