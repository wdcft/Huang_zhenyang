#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
   Rectangle a, b( 7.0, 8.0 ), c( 66.0, 34.0 );

   cout << fixed;
   cout << setprecision( 1 );
   cout << "a: length = " << a.getLength() << "; width = "
      << a.getWidth() << "; perimeter = " << a.perimeter()
      << "; area = " << a.area() << '\n';
   cout << "b: length = " << b.getLength() << "; width = "
      << b.getWidth() << "; perimeter = " << b.perimeter()
      << "; area = " << b.area() << '\n';
   cout << "c: length = " << c.getLength() << "; width = "
      << c.getWidth() << "; perimeter = " << c.perimeter()
      << "; area = " << c.area() << endl;
}
