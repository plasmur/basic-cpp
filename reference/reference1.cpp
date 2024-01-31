#include <iostream>
using namespace std;

void foo(int &x)
{
  x = 20;
}

int main()
{

  int a = 10;

  int b = 28;

  foo(b);

  cout << b << endl; // 20

  cout << a << endl;
}