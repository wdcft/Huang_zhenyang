#include <iostream>
#include "DateAndTime.h"
using namespace std;

int main()
{
   DateAndTime d( 5, 23, 2005, 7, 0, 0 );


   for ( int ticks = 1; ticks <= 3601; ticks++ )
   {
      cout << "Universal time: ";
      d.printUniversal();
      cout << "Standard  time: ";
      d.printStandard();
      d.tick();
   }
   cout << endl;
}
