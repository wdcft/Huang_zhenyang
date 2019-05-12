#include <iostream>

using namespace std;

double minimum( double a,double b,double c )
{
    double result = 0;
    if(a > b)
        result = b;
    else
        result = a;
    if(result > c)
        result = c;
    return result;
}
int main()
{
   double a,b,c = 0;
   cout << "Enter three numbers: ";
   cin >> a >> b >> c;
   cout << "The minimum is " << minimum(a,b,c);
   return 0;
}
