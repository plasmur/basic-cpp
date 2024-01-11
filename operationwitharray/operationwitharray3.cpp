#include <iostream>
using namespace std;

int main()
{
  // angka armstrong adalah jenis angka yang setiap digitnya dipangkatkan dan hasil pangkatnya dijumlahkan dan membentuk angka itu sendiri
  //  contoh 1^(3) + 5^(3) + 3^(3) = 153

  int a[100], i, n;

  cout << " Enter how many numbers you want to check for armstrong propperty\n";
  cin >> n;

  cout << "Enter the element: ";
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (i = 0; i < n; i++)
  {
    int k = 0, rem = 0, sum = 0;

    k = a[i];
    while (k != 0)
    {
      rem = k % 10;
      sum = sum + rem * rem * rem;
      k = k / 10;
    }
    if (sum == a[i])
      cout << a[i] << "\t is an Armstrong number\n\n";
    else
      cout << a[i] << "\t is not an armstrong number\n\n";
  }

  return 0;
}