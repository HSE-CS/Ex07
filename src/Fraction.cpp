// Copyright 2020 ArinaMonicheva
#include "Fraction.h"
#include <cmath>

int Fraction::GCD(int tempNum, int tempDen) {
  while (tempNum != tempDen) {
    if (tempNum > tempDen) {
      tempNum = tempNum - tempDen;
    } else {
      tempDen = tempDen - tempNum;
    }
  }
  return tempNum;
}

std::string Fraction::convertToStr(int number) {
  std::string tempStr = "", tempStr2 = "";
  int i = 0;
  while (number) {
    tempStr += number % static_cast<int>(powf(10.0, i)) + 48;
    number = number / static_cast<int>(powf(10.0, i));
    i++;
  }
  for (int j = tempStr.length() - 1; j >= 1; j--) {
    tempStr2 += tempStr[j];
  }
  return tempStr2;
}

void Fraction::normalize() {
  if (numerator) {
    int tGCD = GCD(abs(numerator), abs(denominator));
    numerator /= tGCD;
    denominator /= tGCD;
    if (numerator < 0 && denominator < 0) {
      numerator = -numerator;
      denominator = -denominator;
    }
  } else {
    denominator = 1;
  }
}

Fraction::Fraction(int newNum = 0, int newDen = 1) {
  numerator = newNum;
  denominator = newDen;
  normalize();
}

Fraction::Fraction() {
  numerator = 0;
  denominator = 1;
}

Fraction::Fraction(const Fraction& otherFraction) {
  numerator = otherFraction.numerator;
  denominator = otherFraction.denominator;
}

std::string Fraction::getValue() {
  std::string fractShow = "";
  if (abs(denominator) == 1 && numerator) {
    fractShow += convertToStr(abs(numerator));
  } else if (abs(denominator) == 1 && !numerator) {
    return "0";
  } else {
    int temp = abs(numerator);
    std::string tempStr = "";
    int i = 0;
    if (numerator < 0 || denominator < 0) {
      fractShow += '-';
    }
    tempStr = convertToStr(abs(numerator));
    fractShow += tempStr;
    fractShow += '/';
    tempStr = convertToStr(abs(denominator));
    fractShow += tempStr;
  }
  return fractShow;
}

int Fraction::getNumerator() {
  return numerator;
}

int Fraction::getDenominator() {
  return denominator;
}

Fraction Fraction::operator+(const Fraction& otherFraction) {
  int LCM = otherFraction.denominator * denominator / 
  GCD(abs(otherFraction.denominator), abs(denominator));
  int tempNum1 = numerator * (LCM / denominator);
  int tempNum2 = otherFraction.numerator * (LCM / otherFraction.denominator);
  tempNum1 = tempNum1 + tempNum2;
  return Fraction(tempNum1, LCM);
}

Fraction Fraction::operator-(const Fraction& otherFraction) {
  int LCM = otherFraction.denominator * denominator /
  GCD(abs(otherFraction.denominator), abs(denominator));
  int tempNum1 = numerator * (LCM / denominator);
  int tempNum2 = otherFraction.numerator * (LCM / otherFraction.denominator);
  tempNum1 = tempNum1 - tempNum2;
  return Fraction(tempNum1, LCM);
}

Fraction Fraction::operator*(const Fraction& otherFraction) {
  int tempNum = numerator * otherFraction.numerator;
  int tempDen = denominator * otherFraction.denominator;
  return Fraction(tempNum, tempDen);
}

Fraction Fraction::operator/(const Fraction& otherFraction) {
  int tempNum = numerator * otherFraction.denominator;
  int tempDen = denominator * otherFraction.numerator;
  return Fraction(tempNum, tempDen);
}

Fraction Fraction::operator=(const Fraction& otherFraction) {
  Fraction newFrac(otherFraction.numerator, otherFraction.denominator);
  numerator = newFrac.numerator;
  denominator = newFrac.denominator;
  return *this;
}
