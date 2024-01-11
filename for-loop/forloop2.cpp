#include <iostream>
using namespace std;

int main()
{

  int i, n, sum = 0;

  do
  {
    cout << "\nEnter the number upto which terms should be generated: ";
    cin >> n;

    if (n < 0)
    {
      cout << "\nNegative numbers not allowed!\n";
    }

  } while (n < 0);
  cout << "\nseries generated: ";

  for (i = 1; i <= n; i *= 2)
  {
    sum += i;
    cout << i << " ";
  }
  cout << "\n\nsum of above series: ";
  cout << sum << endl;
  return 0;
}