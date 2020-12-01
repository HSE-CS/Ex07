#include "Fraction.h"

//+
int NOD(int down, int up) {
    while (up != down && up != 0 && down != 0) {
        if (up > down) {
            up = up - down;
        } else {
            down = down - up;
        }
    }
    return down;
}

//+
void Fraction::normalize() {
    int common = NOD(abs(this->denominator), abs(this->numerator));
    this->denominator /= common;
    this->numerator /= common;
}

//+
std::string Fraction::getValue() {
    normalize();
    if (this->denominator == 1)
        return std::to_string(this->numerator);
    else
        return (std::to_string(this->numerator) + "/" + std::to_string(this->denominator));
}

//+
int Fraction::getNumerator() const {
    return numerator;
}

//+
int Fraction::getDenominator() const {
    return denominator;
}

Fraction Fraction::operator+(Fraction &f) {
    int nnum = this->numerator * f.denominator + this->denominator * f.numerator;
    int nden = this->denominator * f.numerator;
    return Fraction(nnum, nden);
}

Fraction Fraction::operator-(Fraction &f) {
    int nnum = this->numerator * f.denominator - this->denominator * f.numerator;
    int nden = this->denominator * f.numerator;
    return Fraction(nnum, nden);
}

Fraction Fraction::operator*(Fraction &f) {
    int nnum = this->numerator * f.numerator;
    int nden = this->denominator * f.denominator;
    return Fraction(nnum, nden);
}

Fraction Fraction::operator/(Fraction &f) {
    int nnum = this->numerator * f.denominator;
    int nden = this->denominator * f.numerator;
    return Fraction(nnum, nden);
}

Fraction &Fraction::operator=(const Fraction &f) {
    this->numerator = f.numerator;
    this->denominator = f.denominator;
    return *this;
}