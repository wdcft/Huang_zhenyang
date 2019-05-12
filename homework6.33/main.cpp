#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void flip(void)
{
    srand(static_cast<unsigned int>(time(0)));
    int number1 = 0,number2 = 0;
    for(unsigned int counter = 1;counter <= 100;counter++)
    {
        if(rand()%2 == 1)
        {
            cout << "Head" << endl;
            number1 = number1 + 1;
        }
        else
        {
            cout << "Tail" << endl;
            number2 = number2 + 1;
        }
    }
    cout << " Head: " << number1 << endl;
    cout << " Tail: " << number2 << endl;
}
int main()
{
    flip();

}
