#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
   Complex a( 8, 5 ), b( 7, 9 ), c;

   a.printComplex();
   cout << " + ";
   b.printComplex();
   cout << " = ";
   c = a.add( b );
   c.printComplex();

   cout << '\n';
   a.setComplexNumber( 5, 7 );
   b.setComplexNumber( 8, 2 );
   a.printComplex();
   cout << " - ";
   b.printComplex();
   cout << " = ";
   c = a.subtract( b );
   c.printComplex();
   cout << endl;
}
