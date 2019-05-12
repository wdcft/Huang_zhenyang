#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
   Date d( 5,23,2000);
   for ( int loop = 1; loop <= 6929; ++loop )
   {
      d.print();
      d.nextDay();
   }
   cout << endl;
}
