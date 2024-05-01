#include <iostream>
#include <string>
using namespace std;

int main()
{
  int var;
  int *ptr;
  int **pptr;

  var = 4096;

  // take the address of var
  ptr = &var;

  // take the address of ptr using address of operator &
  pptr = &ptr;

  // take the value using pptr
  cout << "value of var: " << var << endl;
  cout << "value avalaible at *ptr: " << *ptr << endl;
  cout << "value avalaible at **pptr: " << **pptr << endl;

  return 0;
}