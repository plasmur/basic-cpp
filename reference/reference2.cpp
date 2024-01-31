#include <iostream>
using namespace std;

int main()
{
  // declare simple variables
  int i;
  double d;

  // declaring and assigning reference variables
  int &r = i;
  double &s = d;

  i = 5;
  cout << "value of i: " << i << endl;
  cout << "value of i reference : " << r << endl;

  d = 11.7;
  cout << "value of d :" << d << endl;
  cout << "value of d reference :" << s << endl;

  return 0;
}