#include <iostream>

using namespace std;

int main()
{
    unsigned int a = 1;
    unsigned int c = 0;
    cout << "Enter number: ";
    cin >> c;
    while(c > 1)
    {
        a = a * c;
        c--;
    }
    cout << "a is " << a << endl;
    return a;
}
