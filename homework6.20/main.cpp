#include <iostream>
#include <string>

using namespace std;
string multiple( int a,int b)
{
   if( b%a == 0 )
   {
       return "true";
   }
   else
   {
       return "false";
   }

}
int main()
{
    int a,b = 0;
    cout << "Enter number: ";
    while(cin >> a >> b)
    {
        cout << multiple(a,b) << endl;
        cout << "Enter number: ";
   }
}
