// Copyright 2020 Sharibzhanova Diana
#include "faction.h"

faction::faction(int a, int b) {
    numerator = a;
    denominator = b;
    if (denominator == 0) {
        throw;
    }
}

faction::faction() {
    numerator = 0;
    denominator = 1;
}

faction::faction(const faction& f) {
    numerator = f.numerator;
    denominator = f.denominator;
    if (denominator == 0) {
        throw;
    }
}

void faction::normalize() {
    int min = 0;

    if (abs(numerator) <= abs(denominator)) {
        min = numerator;
    } else {
        min = denominator;
    }

    int nod = 1;
    for (int i = 0; i <= min; ++i) {
        if ((numerator % i == 0) && (denominator % i == 0) && (i > nod)) {
            nod = i;
        }
    }
    numerator /= nod;
    denominator /= nod;
}

std::string faction::getValue() {
    if (denominator == 1) {
        return std::to_string(numerator);
    } else {
        return std::to_string(numerator) + "/" + std::to_string(denominator);
    }
}

int faction::getNumerator() {
    return numerator;
}

int faction::getDenominator() {
    return denominator;
}

faction faction::operator+(const faction& f) {
    int n = f.denominator * numerator + f.numerator * denominator;
    int d = denominator * f.denominator;
    faction result(n, d);
    return result;
}

faction faction::operator-(const faction& f) {
    int n = f.denominator * numerator - f.numerator * denominator;
    int d = denominator * f.denominator;
    faction result(n, d);
    return result;
}

faction faction::operator*(const faction& f) {
    int n = f.numerator * numerator;
    int d = denominator * f.denominator;
    faction result(n, d);
    return result;
}

faction faction::operator/(const faction& f) {
    int n = f.denominator * numerator;
    int d = f.numerator * denominator;
    faction result(n, d);
    return result;
}

faction& faction::operator=(const faction& f) {
    this->numerator = f.numerator;
    this->denominator = f.denominator;
    normalize();
    return *this;
}
