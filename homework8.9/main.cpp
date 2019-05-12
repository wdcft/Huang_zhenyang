#include <iostream>

using namespace std;

int main()
{
     long long value1 = 200000;
     long long value2;
     long long *longPtr;//a
     longPtr = &value1;//b
     cout << *longPtr << endl;//c
     value2 = *longPtr;//d
     cout << value2 << endl;//e
     cout << &value1 << endl;//f
     cout << longPtr;//g

}
