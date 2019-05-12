#include <iostream>

using namespace std;

int main()
{
    unsigned int n = 0;
    unsigned int counter = 1;
    unsigned int a = 1;
    double b = 0;
    double e = 1;
    double c = 0;

    cout << "Enter precision: ";
    cin >> n;
    cout << "Enter X: ";
    cin >> b;
    while(counter <= n)
    {
        a = a * counter;
        counter++;
        c = b * b;
        e = e + c/a;
    }
    cout << "eX is " << e;
    return 0 ;
}
