#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
unsigned int rollDice()
{
    unsigned int die1 = 1 + rand()%6;
    unsigned int die2 = 1 + rand()%6;
    unsigned int sum = die1 + die2;
    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}
int result()
{
    enum Status { CONTINUE, WON, LOST };
    srand(static_cast<unsigned int>(time(0)));
    unsigned int myPoint = 0;
    Status gameStatus = CONTINUE;
    unsigned int sumOfDice = rollDice();
    switch ( sumOfDice )
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sumOfDice;
        cout << "Point is " << myPoint << endl;
        break;
    }
    while ( CONTINUE == gameStatus )
    {
        sumOfDice = rollDice();

        if( sumOfDice == myPoint )
            gameStatus = WON;
        else if( sumOfDice == 7 )
            gameStatus = LOST;
    }

    return gameStatus;
}
int number()
{
    srand(static_cast<unsigned int>(time(0)));
    int number = 1 + rand()%3;
    return number;
}
int main()
{

    enum Status { CONTINUE, WON, LOST };
    int bankBalance = 1000;
    int wager = 0;

    while( bankBalance != 0 )
    {
    cout << "Your bank balance: " << bankBalance << endl;
    cout << "Please enter the wager: ";
    cin >> wager;
        while( wager > bankBalance )
    {
        cout << "Sorry ,you do not have so much wager\n" << "Please enter the wager again: " << endl;
        cin >> wager;
    }
    if ( WON == result() )
    {
        cout << "You win" << endl;
        bankBalance = bankBalance + wager;
        cout << "Until now,your bank balance is " << bankBalance << endl;
        cout << "You are big.Now is time to cash in your chips" << endl;
    }
    else
    {
        cout << "You lose" << endl;
        bankBalance = bankBalance - wager;
        cout << "Until now,your bank balance is " << bankBalance << endl;
        cout << "Oh,you are going for broke,huh?" << endl;
    }
    if( bankBalance == 0)
    {
        cout << "Sorry. You busted!";
        break;
    }
    }
}
