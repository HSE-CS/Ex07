// Copyright 2020 Grachev Alexander

#include "../include/Fraction.h"

using namespace std;


int main() {
    Fraction a(3, 9);
    cout << a.GetValue() << endl;
    Fraction b(a);
    cout << b.GetValue() << endl;
    cout << b.getNumerator() << '/' << b.getDenominator() << endl;
    Fraction c, d;
    c = a + b;
    cout << c.GetValue() << endl;
    d = a * b;
    cout << d.GetValue() << endl;
    return 0;
}