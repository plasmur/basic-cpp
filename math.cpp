// the concepts in maths & conditionals we have studied till now
#include <iostream>
using namespace std;

int main()
{
  float n1, n2, n3;

  cout << " masukan tiga angka: ";
  cin >> n1 >> n2 >> n3;

  if (n1 >= n2 && n1 >= n3)
    cout << " angka tertinggi: " << n1;

  if (n2 >= n1 && n2 >= n3)
    cout << " angka tertinggi: " << n2;

  if (n3 >= n1 && n3 >= n2)
    cout << " angka tertinggi: " << n3;

  return 0;
}