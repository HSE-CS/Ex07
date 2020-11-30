// Copyright 2020 VadMack
//
// Created by Vadim Makarov on 30.11.2020.
//

#include <iostream>
#include <cstring>
#include "Fraction.h"

using namespace std;

int findNOD(int a, int b){
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    return (a + b);
}

int Fraction::getNumerator() {
    //normalize();
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

void Fraction::normalize() {
    int NOD = findNOD(numerator, denominator);
    numerator /= NOD;
    denominator /= NOD;
}

string Fraction::getValue(Fraction &fraction) {

}


