#include <iostream>
#include "Fraction.h"

int main()
{
  Fraction a1(-1, 2);
  Fraction a2(3, 10);
  Fraction a3;
  std::cout << a1.getValue() << std::endl;

  a3 = a1 * a2;

  std::cout << a3.getValue() << std::endl;
}