#include <iostream>

using namespace std;

int main()
{
   unsigned int n = 0;
   int a = 0;
   int Samllest = 0;

   cout << "How many numbers dou you want to enter: ";
   cin >> n;
   cout << "Enter number: ";
   cin >> Samllest;
   for(unsigned int counter = 2;counter <=n;counter++)
   {
       cout << "Enter number: ";
       cin >> a;
       if(Samllest > a )
       {
           Samllest = a;
       }
   }
   cout << "The Samllest is " << Samllest;
   return 0;
}
