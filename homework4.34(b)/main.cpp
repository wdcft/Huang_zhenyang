#include <iostream>
using namespace std;

int main()
{
    unsigned int n = 0;
    unsigned int a = 1;
    unsigned int counter = 1;
    double e = 1;
    cout << "Enter precision: ";
    cin >> n;
        while(counter <= n)
        {
            a = a * counter;
            counter++;
            e = e + 1.0/a;
        }
    cout << "e is " << e << endl;
}
