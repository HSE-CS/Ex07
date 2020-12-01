// Created by jswark on 01.12.2020.

#include "Fraction.h"
#include <iostream>

int main() {
  Fraction a(1, 2);
  std::cout << a.getValue() << std::endl; // 1/2
  Fraction b(a);
  Fraction c;
  std::cout << c.getValue() << std::endl; // 0
  c = a + b;
  std::cout << c.getValue() << std::endl; // 1
  Fraction a1(1, 5);
  Fraction b1(1, 2);
  Fraction c1;
  c1 = a1 / b1;
  std::cout << c1.getValue() << std::endl; // 2/5
  Fraction a2(-5, 2);
  a2.normalize();
  std::cout << a2.getValue() << std::endl; // -1/2

  return 0;
}