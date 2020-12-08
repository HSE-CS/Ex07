// Copyright 2020 DBarinov

#include "Fraction.h"
#include <iostream>

int main() {
    Fraction a(1, 2), b(2, 3), c;
    c = a/b;
    std::cout << c.getValue();
    return 0;
}