#include <iostream>

using namespace std;
int integerPower(int base,unsigned int exponent)
{
    int result = 1;

    result = base;
    for(unsigned int counter = 1;counter < exponent;counter++)
    {
        result = result * base;
    }

    return result;

}
int main()
{

    cout << "The result is " <<integerPower(3,4)<< endl;
}
