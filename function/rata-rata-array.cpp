#include <iostream>
using namespace std;

double Average(int *arr, int size)
{
  int i, sum = 0;
  double avg;

  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
  avg = double(sum) / size;

  return avg;
}

int main()
{
  int i, n;
  double avg;
  cout << "enter the size of array\n";
  cin >> n;
  int average[n];
  cout << "\nEnter the array elements\n";

  for (i = 0; i < n; i++)
  {
    cin >> average[i];
  }
  cout << "\n \nAvarage value of an array is:" << Average(average, n) << endl;

  return 0;
}
