#include <iostream>
#include <string>

using namespace std;


int primenumber(unsigned int a)
{
    unsigned int time = 0;
    for(unsigned int counter = 1;counter <= a;counter++)
    {
    if( a%counter == 0)
       time = time + 1;
    }
    return time;
}

int main()
{
    int number = 0;
    for(unsigned int counter = 2;counter <= 1000;counter++)
    {
        if(primenumber(counter) == 2)
        {
            cout << counter << " is prime number" << endl;
            number++;
        }
    }
    cout << " 2 to 1000 have " << number << " prime numbers";
}
