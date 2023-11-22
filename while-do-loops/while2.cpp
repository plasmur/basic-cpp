#include <iostream>
using namespace std;

int main()
{
  // variabel without initialization value (tanpa nilai awal)
  int number;
  // variabel with initialization
  int sum = 0;

  cout << "enter a number: ";
  cin >> number;

  while (number >= 0)
  {
    sum += number;
    cout << "enter a number: ";
    cin >> number;
  }
  cout << "\nThe sum is " << sum << endl;

  return 0;
}