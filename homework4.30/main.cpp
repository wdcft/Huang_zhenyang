#include <iostream>

using namespace std;

int main()
{
    double r = 0;
    double R = 0;
    double S = 0;
    double C = 0;
    double a = 3.14159;
    cout << "Enter the r: ";
    cin >> r;
    R = r + r;
    S = r * r * a;
    C = (r + r) * a;
    cout << "The R is " << R << endl;
    cout << "The S is " << S << endl;
    cout << "The C is " << C << endl;
    return 0;
}
