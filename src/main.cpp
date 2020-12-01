// Copyright 2020 PollyllyZh
#include "Fraction.h"
#include <iostream>
int main() {
    Fraction a(1, 2);  // 1/2
    Fraction b(a);
    Fraction c;
    std::cout << c.getValue();  // 0
    c = a + b;
    std::cout << c.getValue();  // 1
    return 0;
}
