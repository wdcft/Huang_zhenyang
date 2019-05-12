#include <iostream>

using namespace std;

int main()
{
  int Number1 = 0;
  int Number2 = 0;
  int Number3 = 0;
  int counter = 1;
  cout << "Enter Number: ";
  cin >> Number1;
  Number2 = Number1;
  cout << "Enter Number: ";
  cin >> Number3;
  if(Number3 > Number1)
    Number1 = Number3;
  else
    Number2 = Number3;


  while(counter <=8)
  {
     cout << "Enter number: ";
     int number = 0;
     cin >> number;
     counter++;
     if(number > Number1)
     {
         Number2 = Number1;
         Number1 = number;
     }
     else if(number < Number1 && number > Number2)
        Number2 = number;
  }
  cout << "The No.1 is " << Number1 << endl;
  cout << "tHE No.2 is " << Number2 << endl;
  return 0;
}
