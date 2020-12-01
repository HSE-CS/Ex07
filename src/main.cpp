// Copyright 2020 Egor Trukhin
#include <iostream>

#include "Fraction.h"

int main() {
  try {
    Fraction a(1, 2);
    Fraction b(a);
    std::cout << a.getValue() << " = ";
    std::cout << b.getValue() << std::endl;  // 1/2

    std::cout << a.getValue() << " + " << a.getValue() << " = ";
    b = a + a;
    std::cout << b.getValue() << std::endl;  // 1

    b = a;
    std::cout << a.getValue() << " * " << b.getValue() << " = ";
    b = a * b;
    std::cout << b.getValue() << std::endl;  // 1/4

    std::cout << a.getValue() << " + " << b.getValue() << " = ";
    b = a + b;
    std::cout << b.getValue() << std::endl;  // 3/4

    Fraction c(1);
    std::cout << c.getValue() << " / " << b.getValue() << " = ";
    c = c / b;
    std::cout << c.getValue() << std::endl;  // 4/3

    std::cout << c.getValue() << " - " << b.getValue() << " = ";
    c = c - b;
    std::cout << c.getValue() << std::endl;  // 1/3

    std::cout << Fraction(1, 0).getValue() << std::endl;  // <-- Error
    std::cout << "this doesn't printed" << std::endl;
  }
  // Catch zero denominator error
  catch (const std::exception& error) {
    std::cerr << error.what() << std::endl;
  }
  return 0;
}
