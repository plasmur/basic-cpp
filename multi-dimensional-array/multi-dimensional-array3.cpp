#include <iostream>
using namespace std;

int main()
{

  int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

  cout << " Enter rows and columns for first matrix: ";
  cin >> r1 >> c1;
  cout << " Enter rows and columns for second matrix: ";
  cin >> r2 >> c2;

  // if columns of first matrix in not equal to row of second matrix,
  // ask the user to enter the size of matrix again.
  while (c1 != r2)
  {
    cout << " Error! column of first matrix not equal to row of second.";

    cout << " Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << " Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
  }
  // Storing elements of first matrix.
  cout << endl
       << "enter elements of matrix 1: " << endl;
  for (i = 0; i < r1; ++i)
    for (j = 0; j < r1; ++j)
    {
      cout << "enter elemnts a" << i + 1 << j + 1 << ":";
      cin >> a[i][j];
    }

  // storing elements of second matrix.
  cout << endl
       << "Enter elements of matrix 2: " << endl;
  for (i = 0; i < r2; ++i)
    for (j = 0; j < r1; ++j)
    {
      cout << "Enter elements b " << i + 1 << j + 1 << ":";
      cin >> b[i][j];
    }
  // initializing elements of matrix mult to 0.
  for (i = 0; i < r1; ++i)
  {
    mult[i][j] = 0;
  }
  // multiplying matrix a and b and storing in array mult.
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      for (k = 0; k < c1; ++k)
      {
        mult[i][j] += a[i][k] * b[k][j];
      }
  // displaying the multiplication of two matrix.
  cout << endl
       << "output matrix: " << endl;
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
    {
      cout << " " << mult[i][j];
      if (j == c2 - 1)
        cout << endl;
    }
  return 0;
}