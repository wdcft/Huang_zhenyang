#include <iostream>
#include <string>

using namespace std;
string iseven(int a)
{
    if(a%2 == 0)
    {
        return "true";
    }
    else
        return "false";
}
int main()
{
    int a = 0;
    cout << "Enter integer: ";
    while(cin >> a)
    {
        cout << iseven(a) << endl;
        cout << "Enter integer: ";
    }
}
