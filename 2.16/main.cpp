#include <iostream>

using namespace std;

int main()
{
    int x=0,y=0,t=0,z=0,p=0,l=0;
    cout<< "Enter two integer ";
    cin>>x>>y;
    t=x+y;
    z=x-y;
    p=x/y;
    l=x*y;
    cout<<"两数之和为 "<<t;
    cout<<"两数之差为 "<<z;
    cout<<"两数之积为 "<<p;
    cout<<"两数之商为 "<<l;
    return 0;
}
