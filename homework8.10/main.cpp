#include <iostream>

using namespace std;

void zero( int *bigIntegers,const size_t numberOfzero)
{
    cout << bigIntegers[0];
}
int add1AndSum( int *oneTooSmall,const size_t numberOfadd1AndSum)
{
    return oneTooSmall[0];
}

int main()
{
    int a[10]={0};
    zero(a,10);
    cout << endl;
    cout << add1AndSum(a,10);
    return 0;
}
