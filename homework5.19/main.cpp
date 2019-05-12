#include <iostream>

using namespace std;

int main()
{
    unsigned int n = 0;
    double i = 1;
    double a = 0;
    double b = 4.0;
    cout << "Enter precision: ";
    cin >> n;
    for(unsigned int counter = 1;counter <= n;counter++)
    {

        a = a + b/i;
        i = i + 2;
        b = -b;
        cout << "¦Ð = " << a << endl;
    }

    return 0;
}
