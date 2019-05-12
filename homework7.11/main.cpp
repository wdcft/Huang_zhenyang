#include <iostream>
#include <array>

using namespace std;

int main()
{
    array < int,10 > counts;
    for(size_t i = 0;i < counts.size(); i++)
        counts[i] = 0;
    cout << endl;

    array < int,15 > bonus;
    for(size_t j = 0;j < bonus.size(); j++)
        bonus[j] = bonus[j] + 1;
    cout << endl;

    array < double,12 > monthlyTemperatures;
    for(size_t k = 0;k < monthlyTemperatures.size(); k++)
    {
        cout << "Please enter the monthlyTemperature: ";
        cin >> monthlyTemperatures[k];
    }
    cout << endl;
    array < int,5 > bestScores;
    for(size_t l = 0;l < 5; l++)
    {
        cout << "\n[" << l << "] ";
        cout << bestScores[l] << " ";
    }

}
