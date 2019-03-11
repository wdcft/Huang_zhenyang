#include <iostream>

using namespace std;

int main()
{
    int r=0,R=0,S=0,l=0,a=0;
    cout<<"输入圆的半径 ";
    cin>>r;
    R=2*r;
    a=3.14159;
    l=2*a*r;
    S=a*r*r;
    cout<<"圆的直径为 "<<R<<endl;
    cout<<"圆的周长为 "<<l<<endl;
    cout<<"圆的面积为 "<<S<<endl;
    return 0;
}
