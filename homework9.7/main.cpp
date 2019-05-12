#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
   Time t;
   t.setTime(18,53,47);
   for ( int ticks = 1; ticks < 30; ticks++ )
   {
      t.printStandard();
      cout << endl;
      t.tick();
   }
}
