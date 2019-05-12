#include <iostream>

using namespace std;

int main()
{
     int a = 0;
     int b = 0;
     int c = 0;

    cout << "Please enter three numbers: ";
    cin >> a >> b >> c;

    if( a * a + b * b == c * c )
        cout << "These number can express the three sides of a right triangle";
    else if( b * b + c * c ==  a * a )
            cout << "These number can express the three sides of a right triangle";
    else if( c * c + a * a == b * b )
            cout << "These number can express the three sides of a right triangle";
    else
        cout << "These number can not express the three sides of a right triangle";

    return 0;
    }
