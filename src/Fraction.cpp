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
    int _n = numerator;
    int _d = denominator;
    if (_n == 0) {
        _fraction += '0';
        return _fraction;
    } else {
        if (abs(_d) == abs(_n)) {
            if ((_d < 0 && _n < 0) || (_d > 0 && _n > 0)) {
                _fraction += '1';
                return _fraction;
            } else if ((_d < 0 && _n > 0) || (_d > 0 && _n < 0)) {
                _fraction += "-1";
                return _fraction;
            }
        } else {
            if ((_d < 0 && _n < 0) || (_d > 0 && _n > 0)) {
                normalize();
                if (abs(_d) == 1) {
                    _fraction += std::to_string(abs(_n));
                    return _fraction;
                } else {
                    _fraction += std::to_string(abs(_n));
                    _fraction += '/';
                    _fraction += std::to_string(abs(_d));
                    return _fraction;
                }
            } else if ((_d < 0 && _n > 0) || (_d > 0 && _n < 0)) {
                normalize();
                if (abs(_d) == 1) {
                    _fraction += '-';
                    _fraction += std::to_string(abs(_n));
                    return _fraction;
                } else {
                    _fraction += '-';
                    _fraction += std::to_string(abs(_n));
                    _fraction += '/';
                    _fraction += std::to_string(abs(_d));
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
    int _num1 = numerator * _fraction.denominator;
    int _num2 = _fraction.numerator * denominator;
    int _den = denominator * _fraction.denominator;
    if (_num1 + _num2 == 0) {
        Fraction _temp(0, 1);
        return _temp;
    } else {
        Fraction _temp(_num1 + _num2, _den);
        _temp.normalize();
        return _temp;
    }
}

Fraction Fraction::operator-(const Fraction &_fraction) {
    if (denominator == 0) {
        throw std::exception();
    }
    int _num1 = numerator * _fraction.denominator;
    int _num2 = _fraction.numerator * denominator;
    int _den = denominator * _fraction.denominator;
    if (_num1 - _num2 == 0) {
        Fraction _temp(0, 1);
        return _temp;
    } else {
        Fraction _temp(_num1 - _num2, _den);
        _temp.normalize();
        return _temp;
    }
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
    int _num = numerator * _fraction.numerator;
    int _den = denominator * _fraction.denominator;
    Fraction _temp(_num, _den);
    _temp.normalize();
    return _temp;
}

Fraction Fraction::operator/(const Fraction &_fraction) {
    if (denominator == 0) {
        throw std::exception();
    }
    int _num = numerator * _fraction.denominator;
    int _den = denominator * _fraction.numerator;
    Fraction _temp(_num, _den);
    _temp.normalize();
    return _temp;
}
