// Copyright 2020 GHA Main Team
#include "Fraction.h"

#include <iostream>

int main() {
    Fraction _drob1(1, 2);
    Fraction _drob2(1, -8);
    Fraction _drob3;
    _drob3 = _drob2 + _drob1;
    std::cout << _drob3.getValue() << std::endl;
    Fraction _drob4;
    _drob4 = _drob1 * _drob2;
    _drob3 = _drob1 / _drob2;
    _drob2 = _drob1 - _drob2;
    std::cout << _drob1.getValue() << std::endl;
    std::cout << _drob2.getValue() << std::endl;
    std::cout << _drob3.getValue() << std::endl;
    std::cout << _drob4.getValue() << std::endl;
    return 0;
}
