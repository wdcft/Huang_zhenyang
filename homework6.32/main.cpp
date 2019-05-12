#include <iostream>

using namespace std;

int qualityPoints (int a)
{
    int point;
    if( a >= 90 )
        point = 4;
    else if( a >= 80 )
        point = 3;
    else if( a >= 70 )
        point = 2;
    else if( a >= 60 )
        point = 1;
    else if( a < 60 )
        point = 0;
    return point;
}
int main()
{
    int a = 0;
    cout << "Enter grade: ";
    cin >> a;
    cout << qualityPoints(a);
    return 0;
}
