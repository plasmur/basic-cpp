#include <iostream>
using namespace std;

int main()
{

  int x = 20, a;
  int y = 15, b;

  cout << " pre decrement operation\n";
  cout << " ------------------------\n";
  a = --x;
  cout << " \na = " << a;

  cout << " \nx = " << x;

  cout << " post decrement operation\n";
  cout << "---------------------------\n";
  b = y--;

  cout << " \nb = " << b;

  cout << " \ny = " << y;

  return 0;
}