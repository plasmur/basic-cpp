#include <iostream>
using namespace std;

int main()
{
  int number;

  cout << "enter an integer: ";
  cin >> number;

  if (number > 0)
  {
    cout << "you entered a positive integer: " << number << endl;
  }

  else if (number < 0)
  {
    cout << "you entered a negative integer: " << number << endl;
  }

  else
  {
    cout << " you entered 0." << endl;
  }

  cout << " this line is out of conditional, so, this line is always printed";

  return 0;
}