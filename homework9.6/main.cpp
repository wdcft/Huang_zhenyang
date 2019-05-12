#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational a(11,4),b(35,6),c;
    a.printRational();
    cout << "+";
    b.printRational();
    cout << "=";
    c = a.add(b);
    c.printRational();
    cout << endl;

    a.printRational();
    cout << "-";
    b.printRational();
    cout << "=";
    c = a.subtract(b);
    c.printRational();
    cout << endl;

     a.printRational();
    cout << "*";
    b.printRational();
    cout << "=";
    c = a.multiplay(b);
    c.printRational();
    cout << endl;

     a.printRational();
    cout << "/";
    b.printRational();
    cout << "=";
    c = a.result(b);
    c.printRational();
    cout << endl;

    a.printRationalBy();
    a.printRationalBydouble();

}
