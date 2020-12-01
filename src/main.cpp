//
// Created by sharg on 01.12.2020.
//
#include <iostream>
#include "Fraction.h"

int main() {
    Fraction firstFr;
    cout << firstFr.getNumerator() << " " << firstFr.getDenominator() << " Value=" << firstFr.getValue() << endl;
    Fraction secondFr(2, 4);
    Fraction threeFr(firstFr);
    firstFr = secondFr + threeFr;
    cout << firstFr.getValue() << endl;
    threeFr = firstFr * secondFr;
    cout << threeFr.getValue() << endl;
    threeFr = secondFr / threeFr;
    cout << threeFr.getValue() << endl;
    return 0;
}
