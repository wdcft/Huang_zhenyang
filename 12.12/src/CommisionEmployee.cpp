#include "CommisionEmployee.h"
#include<string>
#include<stdexcept>
using namespace std;
CommisionEmployee::CommisionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate):Employee(first,last,ssn)
{
    setGrossSales(sales);
    setCommisionRate(rate);
}

void CommisionEmployee::setGrossSales(sales)
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("Commission rate must be >0.0 and <1.0");
}
double getGrossSales()const
{
    return grossSales;
}
void CommisionEmployee::setCommisionRate(double rate)
{
    if(rate>0.0&&rate<1.0)
        CommisionRate=rate;
    else
        throw invalid_argument("Commisiorate must be >0.0and<1.0")
}
double CommisionEmployee::getCommisionRate()
{
    return CommisionRate;
}
double CommisionEmployee::earnings()const
{
    return getCommisionRate()*getGrossSales();
}
void CommisionEmployee::print()const
{
cout<<"commission employee: ";
Employee::print();
cout<<"\ngross sales: "<<getGrossSales()
<<"; commission rate: "<<getCommisionRate();
]
