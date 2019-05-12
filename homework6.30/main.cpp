#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Enter number: ";
    cin >> a;
    while(a)
    {
        b = a%10 + 10 * b;
        a = a / 10;
    }
    cout << b << endl;
    return 0 ;
}
