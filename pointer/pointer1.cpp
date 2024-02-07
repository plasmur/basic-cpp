#include <iostream>
#include <string>
using namespace std;

int main()
{
  string x = "Muhammad";
  string *i;
  i = &x;

  string l = "Andra";
  string *k;
  k = &l;

  string m = "Putra";
  string *n;
  n = &m;

  string u = "Hendriyanto";
  string *h;
  h = &u;

  cout << "value of x is: " << x << endl;
  cout << "value of i is: " << i << endl;
  cout << "value of *i is: " << *i << endl;

  cout << "value of l is: " << l << endl;
  cout << "value of k is: " << k << endl;
  cout << "value of *k is: " << *k << endl;

  cout << "value of m is: " << m << endl;
  cout << "value of n is: " << n << endl;
  cout << "value of *n is: " << *n << endl;

  cout << "value of u is: " << u << endl;
  cout << "value of h is: " << h << endl;
  cout << "value of *h is: " << *h << endl;

  return 0;
}