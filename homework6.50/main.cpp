#include <iostream>

using namespace std;

int tripleByValue (int number)
{
    return number * number * number;
}
void tripleByReference (int &numberRef )
{
    numberRef = numberRef * numberRef * numberRef;
}
int main()
{
    int count = 0;
    cout << "Enter the number: ";
    cin >> count;
    cout << "Value returned by tripleByValue: " << tripleByValue(count) << endl;
    tripleByReference(count);
    cout << "Value returned by tripleByReference: " << count << endl;
}
