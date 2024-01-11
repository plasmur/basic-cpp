#include <iostream>
#include <string>
using namespace std;

int main()
{

  int num, sum, limit;
  sum = 0;
  // program untuk mencari jumlah n bilangan asli pertama dengan batas pengguna pada nilai penjumlahan
  do
  {
    cout << "\nEnter a positive integer: ";
    cin >> num;
    if (num < 0)
    {
      cout << "\nYou have entered a negative number!\n";
    }
  } while (num < 0);
  do
  {
    cout << "\nEnter a positive limit when the loop to breakout:";
    cin >> limit;
    if (limit < 0)
    {
      cout << "\nYou have entered a negative limit!\n";
    }
  } while (limit < 0);
  for (int i = 1; i <= num; i++)
  {
    sum += i;
    if (sum <= limit)
    {
      cout << "Limit did not reached with " << i << " as the last number added||";
      cout << "sum:" << sum - i;
      break;
    }
  }
}