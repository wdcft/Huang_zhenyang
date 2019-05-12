#include <iostream>

using namespace std;

int main()
{
    int Number = 0;
    int counter = 0;
    while(counter <= 10 )
    {
        cout << "Enter number: ";
        int number = 0;
        cin >> number;
        counter++;
        if(number > Number)
        {
            Number = number;
        }
    }
    cout << "The largest is " << Number << endl;
    return 0;
}
