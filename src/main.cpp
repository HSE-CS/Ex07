// Copyright 2020 VadMack
//
// Created by Vadim Makarov on 02.11.2020.
//

#include <iostream>
#include <cstring>
#include "Fraction.h"

int main() {
    /*Fraction a(20,40);
    Fraction b(a);
    Fraction c = a / b;
    cout <<  a.getNumerator() << "    " << a.getDenominator() << endl;
    cout <<  b.getNumerator() << "    " << b.getDenominator() << endl;
    cout << (a + b).getNumerator() << "    " <<(a + b).getDenominator() << endl;
    cout << (a - b).getNumerator() << "    " <<(a - b).getDenominator() << endl;
    cout << (a * b).getNumerator() << "    " <<(a * b).getDenominator() << endl;
    cout << (a / b).getNumerator() << "    " <<(a / b).getDenominator() << endl;
    cout << c.getNumerator() << "    " << c.getDenominator();*/
    Fraction a(1, 6);
    Fraction b(1, 2);
    Fraction c;
    c = a / b;
    std::cout << c.getNumerator() << "    " << c.getDenominator();
}
