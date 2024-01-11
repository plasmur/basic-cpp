#include <iostream>
#include <string>
using namespace std;

int main()
{
  string verb[50];
  int i, number;

  cout << "enter the size of array (Upto 50): ";
  cin >> number;

  for (i = 0; i < number; i++)
  {
    cout << "Enter the verb number " << i << " : ";
    cin >> verb[i];
  }
  cout << "elements of array in reversed order is given below\n";
  for (i = (number - 1); i >= 0; i--)
  {
    cout << verb[i] << " ";
  }
 
  cout << "\n\nlebar array adalah = " << verb[i].length();

  return 0;
}
