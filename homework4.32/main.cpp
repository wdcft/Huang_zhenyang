#include <iostream>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    cout << "Please enter three numbers: ";
    cin >> a >> b >> c;
    if((a + b) > c && (a + c) > b && (b + c) > a)
    {
        cout << "These number is OK";
    }
    else
        cout << "These number is wrong";
    return 0;
}

