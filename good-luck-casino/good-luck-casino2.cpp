#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void rules()
{
  cout << "\n====================================================================================================\n";
  cout << "\t\t\tgamerules";
  cout << "\n====================================================================================================";
  cout << "\n1. choose Number between 1 to 10";
  cout << "\n2. winning Amount will be 10 times of bid amount";
  cout << "\n3. Loose amount will be biding amount";
  cout << "\n4. you can leave a game any time";
  cout << "\n====================================================================================================\n";
};

int main()
{
  string name;
  int amnt, bidamnt, guess, dice;
  char choice;

  srand(time(0)); // use for generating random number each time.

  cout << "\n===============================================================================================";
  cout << "\n   CCCCC      A        SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
  cout << "\n CC          A  A      SS             III     NN N   NN   OO      OO    ";
  cout << "\nCC          A    A     SSSSSSSSS      III     NN  N  NN   OO      OO    ";
  cout << "\n CC        AAAAAAAA           SS      III     NN   N NN   OO      OO    ";
  cout << "\n   CCCCC  A        A   SSSSSSSSS   IIIIIIIII  NN     NN    OOOOOOOO     ";
  cout << "\n===============================================================================================\n";

  cout << "\nEnter player name: ";
  // multiple input
  getline(cin, name);

  cout << "\nDeposit your amount:$";
  cin >> amnt;

  do
  {
    rules();
    do
    {
      cout << "\nWelcome" << name << " are you ready to play?"
           << "\n\n";
      cout << "Enter bid amount: $";
      cin >> bidamnt;
      if (bidamnt > amnt)
        cout << "You can not bid more than current amount\n"
             << "\nRe-enter amount: ";
    } while (bidamnt < amnt);
    do
    {
      cout << "guess the number between 1 to 10:";
      cin >> guess;
      if (guess <= 0 || guess > 10)
        cout << "\nNumber should be between 1 to 10\n"
             << "\nGuess number again: ";
    } while (guess <= 0 || guess > 10);

    dice = rand() % 10 + 1;

    if (dice == guess)
    {
      cout << "\nHurray you won" << bidamnt * 10 << "$";
      amnt = amnt + bidamnt * 10;
    }
    else
    {
      cout << "sorry you lose" << bidamnt << "$\n";
      amnt = amnt - bidamnt;
    }
    // to inform the user that correct number
    cout << "\nThe winning number was: " << dice << "\n";
    cout << "\n"
         << name << " , your remaining amount is " << amnt << "$\n";

    if (amnt == 0)
    {
      cout << "\nsorry you don't have money to play\n";
      break;
    }
    cout << "\nYou want to play again?, press (y/n)";
    cin >> choice;
  } while (choice == 'y' || choice == 'Y');

  cout << "\n===============================================================================================";
  cout << " thanks for playing again your current amount is " << amnt << "$";
  cout << "\n===============================================================================================";

  return 0;
}