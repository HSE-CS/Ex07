// Copyright 2020 dash
#include "Fraction.h"

int main() {
  Fraction a(3, 7);
  Fraction b(2, 7);
  std::cout << "numerator a " <<a.getNumerator() << "\n";
  std::cout<< "denominator a " << a.getDenominator() << "\n";
  std::cout << "numerator b " << b.getNumerator() << "\n";
  std::cout << "denominator b " << b.getDenominator() << "\n";
  Fraction c1;
  c1 = a + b;
  std::cout << "addition " << c1.getValue()<< "\n";
  Fraction c2;
  c2 = a - b;
  std::cout << "subtraction " << c2.getValue() << "\n";\
  Fraction c3;
  c3 = a * b;
  std::cout << "multiplication " << c3.getValue() << "\n";
  Fraction c4;
  c4 = a / b;
  std::cout << "division " << c4.getValue() << "\n";
}
