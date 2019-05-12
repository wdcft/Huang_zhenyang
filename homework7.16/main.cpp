#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time(0)));
    array < int,36000 > roll1;
    array < int,36000 > roll2;
    array < int,36000 > sum;
    for(size_t i = 0;i < roll1.size(); i++)
    {
        roll1[i] = 1 + rand() % 6;
        roll2[i] = 1 + rand() % 6;
        sum[i] = roll1[i] + roll2[i];
    }
    array < int,12 > frequency;
    for (size_t k = 0; k < sum.size(); k++)
        ++frequency[sum[k]];
    cout << "Sum" << setw(20) << "Frequency" << endl;
    for(size_t l = 2; l <= 12; l++)
     cout << l << setw(23) << frequency[l] << endl;

}
