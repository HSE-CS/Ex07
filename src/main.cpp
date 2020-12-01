// Copyright 2020 PolinaP
#include "Fraction.h"
#include <iostream>

int main() {
    Fraction a(1, 2);
    Fraction b(a);
    Fraction c;
    std::cout << c.getValue();
    c = a + b;
    std::cout << c.getValue();
}
