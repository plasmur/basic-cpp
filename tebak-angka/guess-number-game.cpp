#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0));
  int number = rand() % 99 + 1;
  string name;
  int max_attempts;

  cout << "enter your name: ";
  cin >> name;

  cout << "enter max attempts: ";
  cin >> max_attempts;

  int attempts = 0;

  while (attempts < max_attempts)
  {
    int guess;
    cout << "Enter a number from 1 to 99: ";
    cin >> guess;

    if (guess < number)
    {
      cout << "guess is low" << endl;
    }
    else if (guess > number)
    {
      cout << "guess is high" << endl;
    }
    else
    {
      cout << "congratulations" << name << "!you guessed it!" << endl;
      break;
    }
    attempts++;
    cout << "attempts remaining: " << max_attempts - attempts << endl
         << endl;
  }
  if (attempts == max_attempts)
  {
    cout << " out of attempts, you lost. the number was: " << number << endl;
  }
  return 0;
}