// Copyright 2020 VladimirUspensky
//
// Created by vladimir on 01.12.2020.
//

#include "Fraction.h"


int find_nod(int first, int second) {
    while (first != 0 && second != 0) {
        if (first > second) {
            first = first % second;
        } else {
            second = second % first;
        }
    }
    return (first + second);
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

void Fraction::normalize() {
    int nod = find_nod(numerator, denominator);
    numerator /= nod;
    denominator /= nod;
}


