#include <iostream>

using namespace std;

int main()
{
    int x=0,y=0;
    cout<<"Enter two integer "<<endl;
    cin>>x>>y;
    if(x>y)
        cout<<x<<"is large"<<endl;
    if(x<y)
        cout<<y<<"is large"<<endl;
    if(x==y)
        cout<<"These numbers are equal"<<endl;
    return 0;
}
