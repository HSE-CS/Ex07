//RogozyanAnastasiya
#ifndef INCLUDE_FRACTION_H_
#define  INCLUDE_FRACTION_H_
#include <string>

class Fraction {
 private:
    int numerator, denominator;
    void normalize();
 public:
    explicit Fraction(int numerator_inp = 0, int denominator_inp = 1):
        numerator(numerator_inp), denominator(denominator_inp) {
          if (denominator == 0)
                throw;
        }

    Fraction(const Fraction &fr):
        numerator(fr.numerator), denominator(fr.denominator) {
          if (denominator == 0)
                throw;
        }
    std::string getValue();
    int getNumerator();
    int getDenominator();
    Fraction operator+(const Fraction &frs);
    Fraction operator-(const Fraction &frs);
    Fraction operator*(const Fraction &fr);
    Fraction operator/(const Fraction &fr);
    Fraction& operator=(const Fraction &fr);
};

#endif   // INCLUDE_FRACTION_H_
