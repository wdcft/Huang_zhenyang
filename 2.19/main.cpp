#include <iostream>

using namespace std;

int main()
{
int x=0,y=0,z=0,a=0,b=0,c=0;
  cout<<"Enter three integer ";
  cin>>x>>y>>z;
   a=x+y+z;b=a/3;c=x*y*z;
   cout<<"Sum is "<<a<<endl;
   cout<<"Average is "<<b<<endl;
   cout<<"Product is "<<c<<endl;
   if(x<y&&x<z)
    cout<<"Smallest is "<<x;
   if(y<x&&y<z)
    cout<<"Smallest is "<<y;
   if(z<x&&z<y)
    cout<<"Smallest is "<<z;
    if(x>y&&x>z)
    cout<<"Largest is "<<x;
   if(y>x&&y>z)
    cout<<"Largest is "<<y;
   if(z>x&&z>y)
    cout<<"Largest is "<<z;
    return 0;
}
