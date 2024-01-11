#include <iostream>
using namespace std;

int main()
{
  int a[50], i, n, sum = 0;

  cout << "enter the size of array(Upto 50): ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    cout << "Enter the element number " << i << " : ";
    cin >> a[i];
  }
  cout << "elements of array in reversed order is given below\n";
  for (i = (n - 1); i >= 0; i--)
  {
    cout << a[i] << " ";
    sum = sum + a[i];
  }
  cout << "\n\nSum of array is = " << sum;

  return 0;
}