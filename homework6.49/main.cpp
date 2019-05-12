#include <iostream>

using namespace std;

inline double area( const double r )
{
    int pi = 3.14259;
    return r * r * pi;
}
int main()
{
    double r = 0;
    cout << "Enter the r of circle: ";
    cin >> r;
    cout << "Area of circle with " << r << " is " << area( r ) << endl;
}
