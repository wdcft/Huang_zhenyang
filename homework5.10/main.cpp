#include <iostream>

using namespace std;

int main()
{
    unsigned int n = 0;
    unsigned int a = 1;
    cout << "Enter number: ";
    cin >> n;
    for(unsigned int counter = 1;counter <= n;counter++)
    {
        a = a * counter;
        cout << counter << "! is " << a <<endl;
    }
    return 0;
}
