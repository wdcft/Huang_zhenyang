#include "Rational.h"
#include <iostream>

using namespace std;
int a,b;
double res;

Rational::Rational(int num, int den)
{

    if(den%num == 0)
    {
        num = num *(num/den);
        den = den *(num/den);
    }
    setRational(num,den);
}
Rational Rational::add(const Rational &last)
{
    a = numerator * last.denominator + denominator * last.numerator;
    b = denominator * last.denominator;
    if(a%b == 0)
    {
      a = a * (a/b);
      b = b * (a/b);
    }
    return Rational(a,b);
}
Rational Rational::subtract(const Rational &last)
{
    a = numerator * last.denominator + denominator * last.numerator;
    b = denominator * last.denominator;
    if(a%b == 0)
    {
      a = a * (a/b);
      b = b * (a/b);
    }
    return Rational(a,b);
}
Rational Rational::multiplay(const Rational &last)
{
    a = numerator * last.numerator;
    b = denominator * last.denominator;
    if(a%b == 0)
    {
      a = a * (a/b);
      b = b * (a/b);
    }
    return Rational(a,b);
}
Rational Rational::result(const Rational &last)
{
    a = numerator * last.denominator;
    b = denominator * last.numerator;
    if(a%b == 0)
    {
      a = a * (a/b);
      b = b * (a/b);
    }
    return Rational(a,b);
}
void Rational::printRationalBy()
{
    cout << numerator << "/" << denominator << " = " << numerator << "/" << denominator << endl;
}
void Rational::printRationalBydouble()
{
     res = (numerator*1.0) / denominator;
    cout << numerator << "/" << denominator << " = " << res << endl;
}
void Rational::printRational()
{
    cout << '(' << numerator << ", " << denominator << ')';
}
void Rational::setRational( int num, int den)
{
    numerator = num;
    denominator = den;
}

