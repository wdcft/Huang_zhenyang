#ifndef COMMISIONEMPLOYEE_H
#define COMMISIONEMPLOYEE_H
#include"Employee.h"
#include<string>
using namespace std;
class CommisionEmployee
{
    public:
        CommisionEmployee(const string&,const string &,const string &,double =0.0,double =0.0);
        virtual ~CommisionEmployee(){};

    void setCommisionRate(double);
    double getCommisionRate()const;
    void setGrossSales(double);
    double getGrossSales()const;
    virtual double earnings() const override;
virtual void print() const ;

    private:
        double grossSales;
        double CommisionRate;
};

#endif // COMMISIONEMPLOYEE_H
