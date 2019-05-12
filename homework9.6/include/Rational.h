#ifndef RATIONAL_H
#define RATIONAL_H


class Rational
{
    public:
        Rational(int = 1,int = 1);
        void setRational(int,int);
        void printRational();
        void printRationalBy();
        void printRationalBydouble();
        Rational add( const Rational &);
        Rational subtract( const Rational &);
        Rational multiplay( const Rational &);
        Rational result ( const Rational &);

    private:
        int numerator;
        int denominator;
};

#endif
