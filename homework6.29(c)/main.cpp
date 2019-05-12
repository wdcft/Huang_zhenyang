#include <iostream>
#include <cmath>

using namespace std;

string primenumber(int a)
{

    for(unsigned int counter = 2;counter <= sqrt(a);counter++)
    {
        if(a%counter == 0)
        {
            return "false";
        }
    }
    return "true";


}

int main()
{
    int a = 0;
    cout << "Enter number: " << endl;
    cin >> a;
    cout << primenumber(a);
    return 0;
}
