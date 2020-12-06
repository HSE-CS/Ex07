Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
    if (this->denominator < 0) {
        this->numerator *= -1;
        this->denominator *= -1;
    }
    if (this->denominator == 0) {
        throw - 1;
    }
}