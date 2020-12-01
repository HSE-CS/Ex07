//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.

#include <stdio.h>
#include <iostream>
#include "Fraction.h"

int main() {
  Fraction f1(12, 8);
  Fraction f2(1, 2);
  Fraction f3(1, 2);
  Fraction f4(f1);
  std::cout << "12/8 -> " << f1.getValue() << "\n";
  std::cout << "3/2 copied -> " << f4.getValue() << "\n";
  f4 = f3 - f2;
  std::cout << "1/2 - 1/2 -> " << f4.getDenominator() << "\n";
  f3 = f2 + f1;
  std::cout << "3/2 + 1/2 -> " << f3.getValue() << "\n";
  f3 = f2 - f1;
  std::cout << "1/2 - 3/2 -> " << f3.getValue() << "\n";
  f3 = f2 * f1;
  std::cout << "1/2 * 3/2 -> " << f3.getValue() << "\n";
  f3 = f2 / f1;
  std::cout << "1/2 / 3/2 -> " << f3.getValue() << "\n";
}
