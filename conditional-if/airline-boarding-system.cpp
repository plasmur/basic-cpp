#include <iostream>
#include <string>
using namespace std;

int main()
{

  bool fever, loss_off_taste, loss_off_smell, cough, tiredness, result, tickets, luggage;
  string name;
  float age;

  cout << "Enter your name: ";
  cin >> name;

  cout << " enter your age: ";
  cin >> age;

  cout << "Welcome to the airport, " << name << " your age is :" << age << "\nIt is mandatory to get checked for corona symptoms before you board the flight!" << endl;

  cout << "Enter the following details with full honesty to generate your report" << endl;

  cout << "Instructions for users: Enter 0 for No and 1 for Yes" << endl;
  cout << "----------------------------------------------------------------------------" << endl;

  cout << "\n1. Have you been feeling feverish since the past few days?: ";
  cin >> fever;

  cout << "\n2. Have you been feeling loss of taste since past few days?: ";
  cin >> loss_off_taste;

  cout << "\n3. Have you been feeling loss of smell since past few days?: ";
  cin >> loss_off_smell;

  cout << "\n4. Are you having cough problems since the past few days?: ";
  cin >> cough;

  cout << "\n5. have you been tired since the past few days?: ";
  cin >> tiredness;
  result = (fever && (loss_off_taste || loss_off_smell) && cough && tiredness);
  cout << "\nCorona positive, no(0) or yes(1) = " << result << "\n\n";

  if (result == 0)
  {
    cout << "\nDo you have valid tickets?:";
    cin >> tickets;

    cout << "\nDo you want your luggage checked in?:";
    cin >> luggage;

    bool board((luggage || (!result)) && tickets);

    if (board == 0)
    {
      cout << "\nBoarding process incomplete!";
    }
    else if (board == 1)
    {
      cout << "\nBoarding process completed successfully, have a safe trip! " << name;
    }
  }
  if (result == 1)
  {
    cout << name << ", You seem to be corona positive based on your sypmtoms." << endl;
    cout << "We cannot board you on the flight. Sorry for the inconvenience!" << endl;
  }
  return 0;
}