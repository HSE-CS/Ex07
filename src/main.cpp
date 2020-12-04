//  Copyright © 2020 Ksuvot. All rights reserved.
#include "Fraction.h"

int main() {
  Fraction fraction_1;
  std::cout << fraction_1.getNumerator() << std::endl;
  std::cout << fraction_1.getDenominator() << std::endl;

  Fraction fraction_2(10, 11);
  std::cout << fraction_2.getValue() << std::endl;

  Fraction fraction_3;
  fraction_3 = fraction_1 + fraction_2;
  std::cout << fraction_3.getValue() << std::endl;
}
