#include "Fraction.h"

int main(){
    Fraction *fraction = new Fraction(10, 20);
    cout << fraction->getValue() << endl;
    return 0;
}