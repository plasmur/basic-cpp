#include <iostream>
#include <string>
using namespace std;

int main()
{
  // creating and initializing an integer array
  // custom input entries
  // dioper
  int a[] = {75, 56, 12, 85};
  char d[] = {'b', 'r', 'i', 'g', 'h', 't', 'c', 'h', 'a', 'm', 'p', 's'};

  int(&b)[4] = a;
  char(&c)[12] = d;

  // iterating over elements using foreach loop
  cout << "the integer array is as follows: ";
  for (int e : b)
  {
    // print the elements of the array
    cout << e << endl;
  }

  cout << "the character array is as follows: ";
  for (char f : c)
  {
    cout << f << "";
  }
  return 0;
}
