// Copyright 2020 Ozhiganova Polina
#include <iostream>
#include "Fraction.h"

int main() {
  Fraction fr1(1, 3);
  Fraction fr2(1, 2);
  Fraction fr3;
  fr3 = fr1 + fr2;
  std::cout << "1/3 + 1/2 = " << fr3.getValue() << std::endl;
  //
  Fraction fr4(1, 2);
  Fraction fr5(4, 5);
  Fraction fr6;
  fr6 = fr4 - fr5;
  std::cout << "1/2 - 4/5 = " << fr6.getValue() << std::endl;
  //
  Fraction fr7(1, 2);
  Fraction fr8(4, 5);
  Fraction fr9;
  fr9 = fr7 * fr8;
  std::cout << "1/2 * 4/5 = " << fr9.getValue() << std::endl;
  //
  Fraction fr10(1, 2);
  Fraction fr11(1, 8);
  Fraction fr12;
  fr12 = fr10 / fr11;
  std::cout << "1/2 / 1/8 = " << fr12.getValue() << std::endl;
}
