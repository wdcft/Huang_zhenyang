#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    int a = 0;
    for ( count = 1; count <= 10; ++count)
    {
        if (count != 5)
        {
            cout << count << " ";
            a = 5;
        }
        else if(count == 5)
            count = 11;
    }
    cout << "\nBroke out of loop at count = " << a << endl;
}
