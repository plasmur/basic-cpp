#include <iostream>
using namespace std;

// function definition to swap the values.
void swap(int &x, int &y)
{
  int temp;
  temp = x; /*save the value at address x */
  x = y;    /* put y into the x */
  y = temp; /* put x into y */

  return;
}

int main()
{
  // local variabel declaration:
  int a;
  int b;

  cout << " enter an integer to store into variabel a : ";
  cin >> a;
  cout << " enter an integer to store into variabel b : ";
  cin >> b;

  cout << "before swap, value of a :" << a << endl;
  cout << "before swap, value of b :" << b << endl;

  /* calling a function to swap the values using variable reference.*/
  swap(a, b);

  cout << "after swap, value of a :" << a << endl;
  cout << "after swap, value of b :" << b << endl;

  return 0;
}