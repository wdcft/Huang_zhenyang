#include <iostream>

using namespace std;

int main()
{
    int totle = 0;
    unsigned int n = 0;
    cout << "Enter number: ";
    cin >> n;
    for(unsigned int counter = 1;counter <= n ;counter = counter + 2)
    {
        totle = totle + counter;
    }
    cout << "The  add product is " << totle;
    return 0;
}
