// Copyright 2020 Khoroshavina Ekaterina
#include "Fraction.h"
#include <iostream>
#include <string>

int main() {
    Fraction test1(4, 7);
    Fraction& test2(test1);
    Fraction test3;
    std::cout << test1.getValue() << std::endl;
    std::cout << test2.getValue() << std::endl;
    std::cout << test3.getValue() << std::endl;
    test3 = test1 + test2;
    std::cout << test3.getValue() << std::endl;
    test3 = test1 * test2;
    std::cout << test3.getValue() << std::endl;
    test3 = test1 / test2;
    std::cout << test3.getValue() << std::endl;
    return 0;
}
