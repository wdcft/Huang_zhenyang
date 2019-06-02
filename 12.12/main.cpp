#include"BasePlusCommissionEmployee.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommisionEmployee.h"

#include"BasePlusCommissionEmployee.h"
using namespace std;

void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);
int main()
{
    cout<<fixed<<setprecision(2);
    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
    CommisionEmployee commisionEmployee("Sue","Jones","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
cout<<"Employee processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
    commisionEmployee.print();
    cout<<"\nearned $"<<commisionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout<<"\nearned $"<<basePlusCommissionEmployee.earnings()<<"\n\n";
    vector<Employee *>employees(3);
employees[0]=&salariedEmployee;
    employees[1]=&commisionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    cout<<"Employee processed polymorphically via dynamic binding:\n\n";
    cout<<"Virtual function calls made of base-class pointers:\n\n";
    for(const Employee *employeePtr: employees )
        virtualViaPointer(employeePtr);
    for(const Employee *employeePtr: employees )
        virtualViaReference(*employeePtr);
}
void virtualViaPointer(const Employee *const baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearned $"<<baseClassPtr->earnings()<<"\n\n";

}
void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";
}
