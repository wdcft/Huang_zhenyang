#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int totle = 0;
    int average = 0;

    cout << "Enter number: ";
    cin >> a;

    for(unsigned int counter = 1; a != 9999;counter++)
    {
        cout << "Enter number: ";
        cin >> a;
        totle = totle + a;
        average = totle / counter;
    }
    cout << "Average is " << average;

    return 0;
}
