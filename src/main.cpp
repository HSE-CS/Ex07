// Copyright 2020 Elizaveta Drobot
#include "Fraction.h"


int main() {
  Fraction a(2, -3);
  Fraction b(3, -2);
  Fraction c;
  c = a + b;
  std::cout << "numerator = " << c.getNumerator() << "\n";
  std::cout << "denominator = " << c.getDenominator() << "\n";
  std::cout << "fraction = " << c.getValue() << "\n";
  std::cout << "\n";
  c = a - b;
  std::cout << "numerator = " << c.getNumerator() << "\n";
  std::cout << "denominator = " << c.getDenominator() << "\n";
  std::cout << "fraction = " << c.getValue() << "\n";
  std::cout << "\n";
  c = a * b;
  std::cout << "numerator = " << c.getNumerator() << "\n";
  std::cout << "denominator = " << c.getDenominator() << "\n";
  std::cout << "fraction = " << c.getValue() << "\n";
  std::cout << "\n";
  c = a / b;
  std::cout << "numerator = " << c.getNumerator() << "\n";
  std::cout << "denominator = " << c.getDenominator() << "\n";
  std::cout << "fraction = " << c.getValue() << "\n";
  std::cout << "\n";
}
