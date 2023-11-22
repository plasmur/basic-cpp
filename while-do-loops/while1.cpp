#include <iostream>
using namespace std;
// tugas cpp
int main()
{

  int num;

  cout << "enter the number to print table: ";
  cin >> num;
  int i = 1;

  while (i <= 10)
  {
    cout << i << " x " << num << " = " << num * i << endl;
    i++;
  }
  return 0;
}