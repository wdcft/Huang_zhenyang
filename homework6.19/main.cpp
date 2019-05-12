#include <iostream>
#include <cmath>

using namespace std;
double hypotenuse(double a,double b)
{
    double c = 0;

    c = sqrt(a * a + b * b);
    return c;
}
int main()
{
    cout << "The result is " << hypotenuse(3.0,4.0) << endl;
    cout << "The result is " << hypotenuse(5.0,12.0) << endl;
    cout << "The result is " << hypotenuse(8.0,15.0) << endl;
}
