#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  int grade;
  string answer, trial_answers;

  cout << " Enter your name : ";
  cin >> name;

  cout << "\nIn which class do you study (1-12):";
  cin >> grade;

  cout << "\nAre you enrolled in BrightChamps?\nEnter Yes or No: ";
  cin >> answer;

  if (answer == "Yes" || answer == "yes")
  {
    if (grade == 1 || grade == 2)
    {
      cout << "\nWelcome," << name << ", You are in little champs";
    }
    else if (3 <= grade && grade <= 6)
    {
      cout << "\nWelcome," << name << ",you are in junior champs";
    }
    else if (7 <= grade && grade <= 12)
    {
      cout << "\nWelcome," << name << ",you are in Senior champs";
    }
    else
    {
      cout << "\n You have input an invalid class, program will close NOW!";
      exit(0);
    }
  }
  else if (answer == "No" || answer == "no")
  {

    cout << "\nDO you want to enroll for a trial class(Yes/No):";
    cin >> trial_answers;

    if (trial_answers == "yes" || trial_answers == "Yes")
    {

      if (grade == 1 || grade == 2)
      {
        cout << "\nWelcome," << name << ", you will try Little champs trial course";
      }
      else if (3 <= grade && grade <= 6)
      {
        cout << "\nWelcome," << name << ", you will try junior champs trial course";
      }
      else if (7 <= grade && grade <= 12)
      {
        cout << "\nWelcome," << name << ", you will try Senior champs trial course";
      }
      else
      {
        cout << "\n You have input an invalid class, program will close NOW!";
        exit(0);
      }
    }
    else if (trial_answers == "no" || trial_answers == "No")
    {
      cout << "thank you for visiting the program< it will exit now!";
      exit(0);
    }
    else
    {
      cout << "wreong input, program will exit now!";
      exit(0);
    }
  }

  else
  {
    cout << " Wrong input, program will exit now!";
    exit(0);
  }
}