class Fraction
{
 private:
   int numerator, denominator;
 public:
   explicit Fraction();
   explicit Fraction(int a, int b);
   Fraction(Fraction &a);
   void normalize();
   std::string getValue();
   int getNumerator();
   int getDenominator();
   Fraction operator+(Fraction& b);
   Fraction operator-(Fraction& b);
   Fraction operator*(Fraction& b);
   Fraction operator/(Fraction& b);
};
