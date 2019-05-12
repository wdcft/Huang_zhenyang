#include <iostream>
#include <string>

using namespace std;


string primenumber(unsigned int a)
{
    unsigned int time = 0;
    for(unsigned int counter = 1;counter <= a;counter++)
    {
        if( a%counter == 0)
           time = time + 1;
    }

    if(time == 2)
    {
        return " The number is prime number";
    }
    else
        return " The number is not prime number";
}
int main()
{
    unsigned a = 0;
    cout << "Please enter the number: ";
    cin >> a;
    cout << primenumber(a);
}
