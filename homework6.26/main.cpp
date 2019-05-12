#include <iostream>
#include <iomanip>

using namespace std;

double celsius(double f)
{
    double c = 0;
    c = (f - 32)/1.8;
    return c;
}
double fahrenheit(double c)
{
    double f = 0;
    f = c * 1.8 +32;
    return f;
}
int main()
{
    cout << "Celsius" << setw(13) << "Frequency" << endl;
    for(double c = 0;c <= 100;c++)
    {
       cout  << "\n      "<< c << setw(13) << fahrenheit(c);
    }
    cout << "\nFrequency" << setw(13) << "Celsius" << endl;
    for(double f = 32;f <=212;f++ )
    {
        cout << "\n       " << f << setw(13) << celsius(f);
    }

}
