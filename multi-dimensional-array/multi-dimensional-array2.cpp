#include <iostream>

using namespace std;

int main()
{
  int My2DArray[3][3]; // deklaration of 2d arrayd
  My2DArray[0][0] = 5; // initialization
  My2DArray[0][1] = 10;
  My2DArray[0][2] = 12;
  My2DArray[1][0] = 24;
  My2DArray[1][1] = 15;
  My2DArray[1][2] = 20;
  My2DArray[2][0] = 30;
  My2DArray[2][1] = 19;
  My2DArray[2][2] = 10;

  int YetAnother2DArray[3][3];

  cout << "input 9 elements for array: ";

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cin >> YetAnother2DArray[i][j];
    }
  }
  cout << "\nprinting array 1\n";

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cout << My2DArray[i][j] << " ";
    }
    cout << "\n"; // new line at each row
  }

  cout << "\nprinting array 2\n";

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cout << YetAnother2DArray[i][j] << " ";
    }
    cout << "\n"; // new line at each row
  }
  return 0;
}