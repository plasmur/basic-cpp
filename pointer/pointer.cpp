#include <iostream>

using namespace std;

int main()
{
  int x = 27;
  int *p;
  p = &x;

  cout << "value of x is: ";
  cout << x << endl;
  cout << "value of p is: ";
  cout << p << endl;
  cout << "value of *p is: ";
  cout << *p << endl;

  int *bimba; // null

  int halip = 29;

  bimba = &halip;

  cout << "nilai pointer asli: " << bimba << endl;
  cout << "mengakses nilai alamat memorinya " << *bimba << endl;

  return 0;
}