#include <iostream>
using namespace std;

int main()
{
  int size, i, arr1[10], arr2[10];
  int add[10], sub[10], mul[10], mod[10];
  float div[10];

  cout << "\nPlease Enter the Array size = ";
  cin >> size;

  cout << "\nPlease enter the first array items = ";
  for (i = 0; i < size; i++)
  {
    cin >> arr1[i];
  }

  cout << "\nPlease enter the second array items= ";
  for (i = 0; i < size; i++)
  {
    cin >> arr2[i];
  }

  for (i = 0; i < size; i++)
  {
    add[i] = arr1[i] + arr2[i];
    sub[i] = arr1[i] - arr2[i];
    mul[i] = arr1[i] * arr2[i];
    mod[i] = arr1[i] / arr2[i];
    div[i] = arr1[i] % arr2[i];
    cout << "\nthe result of the " << i + 1 << " iteration\n ";
    cout << arr1[i] << "+" << arr2[i] << "=" << add[i] << "\n";
    cout << arr1[i] << "-" << arr2[i] << "=" << add[i] << "\n";
    cout << arr1[i] << "*" << arr2[i] << "=" << add[i] << "\n";
    cout << arr1[i] << "/" << arr2[i] << "=" << add[i] << "\n";
    cout << arr1[i] << "%" << arr2[i] << "=" << add[i] << "\n";
  }
  cout << "\nadd\tSub\tMul\tMod\n";

  for (i = 0; i < size; i++)
  {
    cout << add[i] << "\t";
    cout << sub[i] << "\t";
    cout << mul[i] << "\t";
    cout << mod[i] << "\t";
    cout << div[i] << "\t\n";
  }

  return 0;
}