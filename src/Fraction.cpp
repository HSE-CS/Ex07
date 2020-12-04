// Copyright 2020 GHA Fraction Team
#include "Fraction.h"

Fraction::Fraction(int _numerator, int _denominator) {
    numerator = _numerator;
    denominator = _denominator;
}

Fraction::Fraction(const Fraction &_fraction) {
    numerator = _fraction.numerator;
    denominator = _fraction.denominator;
}

void Fraction::normalize() {
    if (denominator == 0) {
        throw std::exception();
    }
    if (numerator == 0) {
        return;
    }
    int _numerator = abs(numerator);
    int _denominator = abs(denominator);
    while (_numerator != _denominator) {
        if (_numerator > _denominator) {
            int _temporary = _numerator;
            _numerator = _denominator;
            _denominator = _temporary;
        }
        _denominator = _denominator - _numerator;
    }
    numerator = numerator / _numerator;
    denominator = denominator / _numerator;
}

std::string Fraction::getValue() {
    if (denominator == 0) {
        throw std::exception();
    }
    std::string _fraction;
    if (numerator == 0) {
        _fraction += '0';
        return _fraction;
    } else {
        if (abs(denominator) == abs(numerator)) {
            if ((denominator < 0 && numerator < 0) || (denominator > 0 && numerator > 0)) {
                _fraction += '1';
                return _fraction;
            } else if ((denominator < 0 && numerator > 0) || (denominator > 0 && numerator < 0)) {
                _fraction += "-1";
                return _fraction;
            }
        } else {
            if ((denominator < 0 && numerator < 0) || (denominator > 0 && numerator > 0)) {
                normalize();
                if (abs(denominator) == 1) {
                    _fraction += std::to_string(abs(numerator));
                    return _fraction;
                } else {
                    _fraction += std::to_string(abs(numerator));
                    _fraction += '/';
                    _fraction += std::to_string(abs(denominator));
                    return _fraction;
                }
            } else if ((denominator < 0 && numerator > 0) || (denominator > 0 && numerator < 0)) {
                normalize();
                if (abs(denominator) == 1) {
                    _fraction += '-';
                    _fraction += std::to_string(abs(numerator));
                    return _fraction;
                } else {
                    _fraction += '-';
                    _fraction += std::to_string(abs(numerator));
                    _fraction += '/';
                    _fraction += std::to_string(abs(denominator));
                    return _fraction;
                }
            }
        }
        return _fraction;
    }
}

int Fraction::getNumerator() {
    if (denominator == 0) {
        throw std::exception();
    }
    normalize();
    return numerator;
}

int Fraction::getDenominator() {
    if (denominator == 0) {
        throw std::exception();
    }
    normalize();
    return denominator;
}

Fraction Fraction::operator+(const Fraction &_fraction) {
    if (denominator == 0) {
        throw std::exception();
    }
    int _num1 = numerator;
    int _den1 = denominator;
    int _num2 = _fraction.numerator;
    int _den2 = _fraction.denominator;
    Fraction _temp(_num1 * _den2 + _num2 * _den1, _den1 * _den2);
    _temp.normalize();
    return _temp;
}

Fraction Fraction::operator-(const Fraction &_fraction) {
    if (denominator == 0) {
        throw std::exception();
    }
    int _num1 = numerator;
    int _den1 = denominator;
    int _num2 = _fraction.numerator;
    int _den2 = _fraction.denominator;
    Fraction _temp(_num1 * _den2 - _num2 * _den1, _den1 * _den2);
    _temp.normalize();
    return _temp;
}

Fraction& Fraction::operator=(const Fraction &_fraction) {
    if (denominator == 0) {
        throw std::exception();
    }
    numerator = _fraction.numerator;
    denominator = _fraction.denominator;
    return *this;
}

Fraction Fraction::operator*(const Fraction &_fraction) {
    if (denominator == 0) {
        throw std::exception();
    }
    Fraction _temp(numerator * _fraction.numerator, denominator * _fraction.denominator);
    _temp.normalize();
    return _temp;
}

Fraction Fraction::operator/(const Fraction &_fraction) {
    if (denominator == 0) {
        throw std::exception();
    }
    Fraction _temp(numerator * _fraction.denominator, denominator * _fraction.numerator);
    _temp.normalize();
    return _temp;
}
