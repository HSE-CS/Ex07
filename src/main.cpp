// Copyright 2020 GHA Test Team
#include "Fraction.h"
#include <iostream>

int main() {
  Fraction a(1, 2);
  Fraction b(1, 2);
  std::cout << (a * b).getValue();
}
