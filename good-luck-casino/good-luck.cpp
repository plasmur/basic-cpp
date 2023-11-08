#include <iostream>
#include <string>
using namespace std;

int main()
{
  // multiple declaration variables
  string name, continue_answer, token_buy_answer;
  int age, balance_amount, bet_amount, dice, guess;
  srand(time(0));

  cout << "Please enter your name: ";
  getline(cin, name);

  cout << "welcome, " << name << "to the goodluck Casino,\nEnter your age to continue further: ";
  cin >> age;

  if (12 < age && age < 18)
  {
    cout << " you are eligible for tier 1 game\n";
    cout << "\nWould you like to continue(Enter YES to continue): ";
    cin >> continue_answer;
    if (continue_answer == "YES")
    {
      cout << "\nTo play the game you'll have to purachase 500 tokens for 50 dollars. Do you accept(Enter YES to confirm): ";
      cin >> token_buy_answer;
      if (token_buy_answer == "YES")
      {
        balance_amount = 500;
        cout << "\nThanks for your purchase, how much you want to bet on the game. Amount should be <" << balance_amount << endl;
        cout << "Bet amount: ";
        cin >> bet_amount;
        if (bet_amount > balance_amount)
        {
          cout << "\nYou Can not Bid More Than Current Amount. Program will exit now!";
          exit(0);
        }
        else
        {
          cout << "\nGuess The Number Between 1 and 10 only :";
          cin >> guess;
          if (guess <= 0 || guess > 10)
          {
            cout << "\nNumber Sholud Be Between 1 To 10. Program wiil exit now!";
            exit(0);
          }
          else
          {
            dice = rand() % 10 + 1;

            if (dice == guess)
            {
              cout << "\nHurray You Won " << bet_amount * 10;
              balance_amount = balance_amount + bet_amount * 10;
            }
            else
            {
              cout << "\nSorry You Lose " << bet_amount << "\n";
              balance_amount = balance_amount - bet_amount;
            }

            cout << "\nThe Winning Number Was: " << dice << "\n";
            cout << "\n"
                 << name << ", Your Remaining Amount Is " << balance_amount << ", but you get one chance only\n";
            exit(0);
            if (balance_amount == 0)
            {
              cout << "\nSorry You Don't Have Money To Play. The program will exit now!";
              exit(0);
            }
          }
        }
      }
      else
      {
        cout << "\nSorry to see you go, but you can't stay in casino without buying tokens!";
        exit(0);
      }
    }
    else
    {
      cout << "\nSorry to see you leave!";
      exit(0);
    }
  }
  // kondisi 2

  // else if ( ) {

  // }

  else
  {
    cout << "\nUnfortunately we don't serve your age group, thanks for visiting our program! ";
    exit(0);
  }

  return 0;
}
