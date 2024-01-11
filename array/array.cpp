#include <iostream>
using namespace std;

int main()
{
  int angka[20];

  for (int i = 0; i <= 20; i++)

  {
    angka[i] = i;
  }
  for (int i = 0; i <= 20; i++)

  {
    cout << angka[i] << " ";
  }
  cout << endl;
  return 0;
}