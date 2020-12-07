// Copyright [2020] <Balayan Roman>

#include "../include/Fraction.h"

void Fraction::normilize() {
    if (this->denominator == 0)
        throw "Denominator is 0!";
    if (this->numerator == 0)
        return;
    int p, q;
    bool isMinus = (this->numerator >= 0 && this->denominator < 0 
                 || this->numerator < 0 && this->denominator >= 0);
    this->numerator = abs(this->numerator);
    this->denominator = abs(this->denominator);
    for (int i = 1; i <= this->numerator && i <= this->denominator; i++) {
        float aa = this->numerator % i;
        float bb = this->denominator % i;
        if (!(this->numerator % i) && !(this->denominator % i)) {
            p = this->numerator / i;
            q = this->denominator / i;
        }
    }
    this->numerator = isMinus ? -1*p : p;
    this->denominator = q;
}

Fraction::Fraction(int a, int b) {
	this->numerator = a;
	this->denominator = b;
}

Fraction::Fraction(const Fraction& fr) {
    this->numerator = fr.getNumerator();
    this->denominator = fr.getDenominator();
}

std::string Fraction::getValue() {
    std::string val;
    bool isMinus = (this->numerator >= 0 && this->denominator < 0 
                 || this->numerator < 0 && this->denominator >= 0);
    val += isMinus ? "-" : "";
    val += std::to_string(abs(this->numerator));
    if (this->denominator != 1 && this->numerator != 0) {
        val += "/";
        val += std::to_string(abs(this->denominator));
    }
    return val;
}

int Fraction::getNumerator() const {
	return this->numerator;
}

int Fraction::getDenominator() const {
	return this->denominator;
}

const Fraction Fraction::getNormilized() const {
    if (this->denominator == 0)
        throw "Denominator is 0!";
    int a = this->numerator;
    int b = this->denominator;
    int p = a;
    int q = b;
    bool isMinus = (a >= 0 && b < 0 || a < 0 && b >= 0);
    a = abs(a);
    b = abs(b);
    for (int i = 1; i <= a && i <= b; i++) {
        float aa = a % i;
        float bb = b % i;
        if (!(a % i) && !(b % i)) {
            p = a / i;
            q = b / i;
        }
    }
    a = isMinus ? -1 * p : p;
    b = q;
    return Fraction(a, b);
}

const Fraction Fraction::operator+(const Fraction& b) {
    Fraction aNorm = this->getNormilized();
    Fraction bNorm = b.getNormilized();
    int num = aNorm.getNumerator() * bNorm.getDenominator() 
            + bNorm.getNumerator() * aNorm.getDenominator();
    int denom = aNorm.getDenominator() * bNorm.getDenominator();
    Fraction res(num, denom);
    res.normilize();
    return res;
}

const Fraction Fraction::operator-(const Fraction& b) {
    Fraction aNorm = this->getNormilized();
    Fraction bNorm = b.getNormilized();
    int num = aNorm.getNumerator() * bNorm.getDenominator() 
            - bNorm.getNumerator() * aNorm.getDenominator();
    int denom = aNorm.getDenominator() * bNorm.getDenominator();
    Fraction res(num, denom);
    res.normilize();
    return res;
}

const Fraction Fraction::operator*(const Fraction& b) {
    Fraction aNorm = this->getNormilized();
    Fraction bNorm = b.getNormilized();
    int num = aNorm.getNumerator() *  bNorm.getNumerator();
    int denom = aNorm.getDenominator() * bNorm.getDenominator();
    Fraction res(num, denom);
    res.normilize();
    return res;
}

const Fraction Fraction::operator/(const Fraction& b) {
    Fraction aNorm = this->getNormilized();
    Fraction bNorm = b.getNormilized();
    int num = aNorm.getNumerator() * bNorm.getDenominator();
    int denom = aNorm.getDenominator() * bNorm.getNumerator();
    Fraction res(num, denom);
    res.normilize();
    return res;
}

void Fraction::operator=(const Fraction& b) {
    this->numerator = b.getNumerator();
    this->denominator = b.getDenominator();
}

