#include <iostream>
using namespace std;

int main()
{

  char word[5] = {'a', 'b', 'c', 'd', 'e'};
  int number[5] = {10, 0, 20, 0, 30};

  for (int i = 0; i < 5; i++)
  {
    cout << " char array element at " << i << " index: " << word[i] << endl;
    cout << " Integer array element at " << i << " index: " << number[i] << endl;
  }

  return 0;
}