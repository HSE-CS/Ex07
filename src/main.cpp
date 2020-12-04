// Created by Ksuvot on 03.12.2020.
#include "Fraction.h"

int main() {
  Fraction fraction_1;
  cout << fraction_1.getNumerator() << endl;
  cout << fraction_1.getDenominator() << endl;

  Fraction fraction_2(10, 11);
  cout << fraction_2.getValue() << endl;

  Fraction fraction_3;
  fraction_3 = fraction_1 + fraction_2;
  std::cout << fraction_3.getValue() << endl;

  return 0;
}