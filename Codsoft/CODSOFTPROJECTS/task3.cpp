#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0)); // Will generate different numbers at different instance
    int secretNumber = (rand() % 100) + 1; // Will generate the numbers between 1 to 100
    int guessedNumber;
    int NoofAttempts = 1;

    cout << "Hi! Welcome to the number guessing game." << endl;
    cout << "I am going to give you a random number between 1 to 100 and you have to guess it right" << endl;

    do
    {
        cout << "Guess the number ";
        cin >> guessedNumber;

        if (guessedNumber == secretNumber)
        {
            cout << "Congratulations! You guessed it right in " << NoofAttempts << " attempts";
        }
        else if (guessedNumber < secretNumber)
        {
            cout << "The secret number is higher than your guessed number.Please Try again."<<endl;
            NoofAttempts++;
        }
        else
        {
            cout << "The secret number is lesser than your guessed number.Please Try again."<<endl;
            NoofAttempts++;
        }

    } while (secretNumber != guessedNumber);

    return 0;
}