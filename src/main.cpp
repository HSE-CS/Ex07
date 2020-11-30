// Copyright 2020 <Copyright NikDemoShow>
#include "Fraction.h"

int main() {
  Fraction a(1, 2), b(1, 3);
  Fraction sum(a + b);
  std::cout << sum.getValue() << std::endl;
  Fraction dif(a - b);
  std::cout << dif.getValue() << std::endl;
  Fraction mult(a * b);
  std::cout << mult.getValue() << std::endl;
  Fraction div(a / b);
  std::cout << div.getValue() << std::endl;
  return 0;
}
