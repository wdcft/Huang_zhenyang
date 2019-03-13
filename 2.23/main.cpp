#include <iostream>

using namespace std;

int main()
{
   int a=0,b=0,c=0,d=0,e=0;
   cout<<"Enter five integer "<<endl;
    cin>>a>>b>>c>>d>>e;
    if(a>b)    if(a>c)    if(a>d)    if(a>e)
    cout<<"The largest is "<<a<<endl;
    if(b>a)    if(b>c)    if(b>d)    if(b>e)
         cout<<"The largest is "<<b<<endl;
    if(c>a)    if(c>b)    if(c>e)    if(c>d)
        cout<<"The largest is "<<c<<endl;
    if(d>a)    if(d>b)    if(d>c)    if(d>e)
        cout<<"The largest is "<<d<<endl;
    if(e>a)    if(e>b)    if(e>c)    if(e>d)
        cout<<"The largest is "<<e<<endl;
    if(a<b)    if(a<c)    if(a<d)    if(a<e)
        cout<<"The smallest is "<<a<<endl;
    if(b<a)    if(b<c)    if(b<d)    if(b<e)
        cout<<"The smallest is "<<b<<endl;
     if(c<a)    if(c<b)    if(c<d)    if(c<e)
        cout<<"The smallest is "<<b<<endl;
     if(d<a)    if(d<b)    if(d<c)    if(d<e)
        cout<<"The smallest is "<<d<<endl;
     if(e<a)    if(e<b)    if(e<c)    if(e<d)
        cout<<"The smallest is "<<e<<endl;
    return 0;
}
