#include <iostream>
using namespace std;

int main()
{
  int size, i, arr1[10], arr2[10];
  int add[10], sub[10], mul[10], mod[10];
  float div[10];

  cout << "\nplease enter the array size =  ";
  cin >> size;

  for (i = 0; i < size; i++)
  {
    cout << "\nplease enter the first array items = ";
    cin >> arr1[i];
  }
  for (i = 0; i < size; i++)
  {
    cout << "\nplease enter the second array items = ";
    cin >> arr2[i];
  }
  for (i = 0; i < size; i++)
  {
    add[i] = arr1[i] + arr2[i];
    sub[i] = arr1[i] - arr2[i];
    mul[i] = arr1[i] * arr2[i];
    mod[i] = arr1[i] / arr2[i];
    div[i] = arr1[i] % arr2[i];
    cout << "\nthe result of the " << i + 1 << " iteration\n";
    cout << arr1[i] << " + " << arr2[i] << " = " << add[i] << "\n ";
    cout << arr1[i] << " - " << arr2[i] << " = " << sub[i] << "\n ";
    cout << arr1[i] << " * " << arr2[i] << " = " << mul[i] << "\n ";
    cout << arr1[i] << " / " << arr2[i] << " = " << mod[i] << "\n ";
    cout << arr1[i] << " % " << arr2[i] << " = " << div[i] << "\n ";
  }
  cout << "\nadd\tsub\tmul\tdiv\tmod \n";

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