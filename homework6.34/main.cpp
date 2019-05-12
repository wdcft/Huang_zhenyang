#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int number = 1 + rand() %1000;
    int a = 0;
    int b = 0;
    cout << "I have a number between 1 and 1000." << endl;
    cout << "Can you guess my number?" << endl;
    cout << "Please type your first guess." << endl;


    while(b != -1)
    {
        cout << "Enter number: " << endl;
        cin >> a;
        if( a == number)
       {
          cout << "Excellent! You guessed the number!" << endl;
          cout << "Would you like to play again( y or n )" << endl;
          b = -1;
       }

    else if( a < number )
          {
              cout << "Too low. Try again." << endl;
              b = b + 1;

          }
    else if( a > number )
          {
              cout << "Too high. Try again." << endl;
              b = b + 1;
          }
    }


}
