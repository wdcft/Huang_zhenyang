#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include<string>
#include"CommisionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee :public CommisionEmployee
{
    public:
        BasePlusCommissionEmployee(const string &,const string &,const string &,double =0.0,double=0.0,double=0.0);
        virtual ~BasePlusCommissionEmployee(){};

    void setBaseSalary(double);
    double getBaseSalary()const;
virtual double earnings() const override;
    virtual void print() const override;

    private:
        double baseSalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H
