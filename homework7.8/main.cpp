#include <iostream>
#include <array>

using namespace std;

int main()
{
    array < int,10 > alphabet;
    cout << "alphabet[6] = " << alphabet[6] << endl;

    array < double,10 > grades;
    cout << "Please enter to grades[4]: " << endl;
    cin >> grades[4];
    cout <<  "grades[4] = " << grades[4] << endl;

    array < int,5 > values = {8,8,8,8,8};
    for(size_t j = 0; j < values.size(); j++)
        cout << "values[" << j << "] = " << values[j] << endl;

    array < double,100 > temperatures = {0};
    double totle = 0;
    for(size_t i = 0; i < temperatures.size(); i++)
        totle = totle + temperatures[i];
    cout << "Sum of 100 temperature: " << totle << endl;

    array < double,11 > a;
    array < double,34 > b;
    cout << "a " << "b  " << endl;
    for(size_t k = 0; k < a.size(); k++)
    {
        b[k] = a[k];
        cout  << a[k] << "  " << b[k]<< endl;
    }

    array < double,99 > w;
    double e,f =0;
    e = w[0];
    f = w[0];
    for(size_t l = 1; l < w.size(); l++)
    {
        if(e < w[l])
            e = w[l];
    }
    for(size_t o = 1; o < w.size(); o++)
    {
        if( f > w[o])
            f = w[o];
    }
    cout << "The largest number of w is: " << e << endl;
    cout << "The smallest number of w is: " << f << endl;



}
