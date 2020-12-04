// Copyright 2020 Tatsenko Ilya

#include<iostream>
#include"Fraction.h"

int main() {
Fraction a(1, 3);
Fraction b(0, 0);
Fraction c;
std::cout << a.getValue() << std::endl;
c = a / b;
std::cout << c.getValue();
}
