Fraction operator+ (const Fraction& a) {
    Fraction b;
    if (this->denominator == a.denominator) {
        b.numerator = this->numerator + a.numerator;
        b.denominator = this->denominator;
    }
    else {
        b.denominator = this->denominator * a.denominator;
        b.numerator = this->numerator * a.denominator +
            a.numerator * this->denominator;
    }
    b.denominator = this->denominator * a.denominator;
    b.numerator = this->numerator * a.denominator +
        a.numerator * this->denominator;
    if (b.denominator == 0) {
        throw - 1;
    }
    Fraction operator- (const Fraction & a) {
        Fraction b;
        if (this->denominator == a.denominator) {
            b.numerator = this->numerator - a.numerator;
            b.denominator = this->denominator;
        }
        else {
            b.denominator = this->denominator * a.denominator;
            b.numerator = this->numerator * a.denominator -
                a.numerator * this->denominator;
        }
        b.denominator = this->denominator * a.denominator;
        b.numerator = this->numerator * a.denominator -
            a.numerator * this->denominator;
        if (b.denominator == 0) {
            throw - 1;
        }

        Fraction b;
        b.numerator = this->numerator * a.numerator;
        b.denominator = this->denominator * a.denominator;
        if (b.denominator < 0) {
            b.numerator *= -1;
            b.denominator *= -1;
        }
        if (b.denominator == 0) {
            throw - 1;
        }

        Fraction b;
        b.numerator = this->numerator * a.denominator;
        b.denominator = this->denominator * a.numerator;
        if (b.denominator < 0) {
            b.numerator *= -1;
            b.denominator *= -1;
        }
        if (b.denominator == 0) {
            throw - 1;
        }
    }
}