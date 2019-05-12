#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double a ,double b)
{
    setComplexNumber(a,b);
}

Complex Complex::add(const Complex &right)
{
    return Complex(realPart+right.realPart,imaginaryPart+right.imaginaryPart);
}

Complex Complex::nimius( const Complex &right )
{
   return Complex(realPart-right.realPart,imaginaryPart-right.imaginaryPart);
}

void Complex::printComplex()
{
    cout << '(' << realPart << ", " << imaginaryPart << ')';
}

void Complex::setComplexNumber( double rp, double ip )
{
   realPart = rp;
   imaginaryPart = ip;
}
