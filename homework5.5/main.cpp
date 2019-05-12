#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int counter = 1;
    cout << "Enter number: ";
    cin >> n;
    cout << n << " ";
   for(int a = 100;counter <= n;counter++)
   {
       cout << a << " ";
       a = a + 100;
   }

   return 0;
}
