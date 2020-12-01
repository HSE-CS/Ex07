// Copyright 2020 AndreyBakurskii

#include "Fraction.h"

int main() {
  // Fraction a(1, 2);  // 1/2
  // Fraction b(a);
  // Fraction c;
  // std::cout << a.getValue() << "\n";  // 1/2
  // std::cout << c.getValue() << "\n";  // 0
  // c = a / b;
  // std::cout << c.getValue() << "\n";  // 1

  std::cout << Fraction(-1, 2).getNumerator();
}
