#include <iostream>
using namespace std;
class Account
{
public:
    Account(int a,int b,int c)
    {
        setbalance(a);
        setcredit(b);
        setdebit(c);

    }
    void setcredit(int k)
    {
        credit=k;
    }
    void setdebit(int h)
    {
        debit=h;
    }
    void setbalance(int oo)
    {
        Balance=oo;

    if(Balance>=0)
    Balance=oo;
    else
        Balance=0&&cout<<"��ʼ�����Ч";
    }


int getbalance()
{
   M=Balance+credit-debit;
    return M;
}
void displaymessage()
{
    cout<<"��ǰ���Ϊ "<<getbalance();
}
private:
    int Balance;
int credit;
int debit;
int M;
};
