// Copyright 2020 Longa Bonga
#include<iostream>
#include "Fraction.h"

int main() {
  Fraction fst(-7, 4);
  Fraction scnd(5, 3);
  std::cout << fst.getNumerator() << '\n';
  std::cout << fst.getDenominator() << '\n';
  fst.normalize();
  std::cout << fst.getValue() << '\n';
  std::cout << (fst * scnd).getValue() << '\n';
}
