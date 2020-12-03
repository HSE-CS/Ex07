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
    if(denominator == 0) {
        throw std::exception();
    }
    int _numerator = abs(numerator);
    int _denominator = abs(denominator);
    while(_numerator != _denominator) {
        if(_numerator > _denominator) {
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
    if(denominator == 0) {
        throw std::exception();
    }
    std::string _fraction;
    if(abs(denominator) == abs(numerator) && ((denominator < 0 && numerator <= 0) || (denominator > 0 && numerator >= 0))) {
        _fraction += '1';
        return _fraction;
    } else if(abs(denominator) == abs(numerator) && ((denominator < 0 && numerator >= 0) || (denominator > 0 && numerator <= 0))) {
        _fraction += "-1";
        return _fraction;
    } else if((denominator < 0 && numerator <= 0) || (denominator > 0 && numerator >= 0)) {
        normalize();
        if(abs(denominator) == 1) {
            _fraction += std::to_string(abs(numerator));
            return _fraction;
        } else {
            _fraction += std::to_string(abs(numerator));
            _fraction += '/';
            _fraction += std::to_string(abs(denominator));
            return _fraction;
        }
    } else if((denominator < 0 && numerator >= 0) || (denominator > 0 && numerator <= 0)) {
        normalize();
        if(abs(denominator) == 1) {
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
    return _fraction;
}

int Fraction::getNumerator() {
    if(denominator == 0) {
        throw std::exception();
    }
    normalize();
    return numerator;
}

int Fraction::getDenominator() {
    if(denominator == 0) {
        throw std::exception();
    }
    normalize();
    return denominator;
}

Fraction Fraction::operator+(Fraction &_fraction) {
    if(denominator == 0) {
        throw std::exception();
    }
    normalize();
    _fraction.normalize();
    Fraction _temp(numerator * _fraction.denominator + _fraction.numerator * denominator, _fraction.denominator * denominator);
    _temp.normalize();
    return _temp;
}

Fraction Fraction::operator-(Fraction &_fraction) {
    if(denominator == 0) {
        throw std::exception();
    }
    normalize();
    _fraction.normalize();
    Fraction _temp(numerator * _fraction.denominator - _fraction.numerator * denominator, denominator * _fraction.denominator);
    _temp.normalize();
    return _temp;
}

Fraction& Fraction::operator=(const Fraction &_fraction) {
    if(denominator == 0) {
        throw std::exception();
    }
    numerator = _fraction.numerator;
    denominator = _fraction.denominator;
    return *this;
}

Fraction Fraction::operator*(Fraction &_fraction) {
    if(denominator == 0) {
        throw std::exception();
    }
    normalize();
    _fraction.normalize();
    Fraction _temp(numerator * _fraction.numerator, denominator * _fraction.denominator);
    _temp.normalize();
    return _temp;
}

Fraction Fraction::operator/(Fraction &_fraction) {
    if(denominator == 0) {
        throw std::exception();
    }
    normalize();
    _fraction.normalize();
    Fraction _temp(numerator * _fraction.denominator, denominator * _fraction.numerator);
    _temp.normalize();
    return _temp;
}
