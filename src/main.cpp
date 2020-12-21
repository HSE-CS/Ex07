// Copyright 2020 Nikita Semaev
#include <stdio.h>
#include <iostream>
#include "../include/Fraction.h"


int main() {
  Fraction test(1, 1);
  Fraction test2(test);

  test = test + test2;
  std::cout << test.getNumerator() << " " << test.getDenominator() << std::endl;

  std::cout << "Hello" << std::endl;
  getchar();
  getchar();
  return 0;
}

