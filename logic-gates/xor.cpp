#include <iostream>
using namespace std;

int main()
{

  int a = 19;
  int b = 35;

  cout << ((a == 0) ^ (a > b)) << endl; // false

  cout << ((a == 0) ^ (a < b)) << endl; // true

  cout << ((a == 15) ^ (a > b)) << endl; // false

  cout << ((a == 15) ^ (a < b)) << endl; // true

  cout << ((b == 19) ^ (a > b)) << endl; // false

  cout << ((b == 35) ^ (a < b)) << endl; // false
  // dari kode diatas maka xor adalah sebuah operator yang digunakan untuk membandingkan 2 atau lebih nilai bolean dan menentukan apakah nilai nilai tersebut berbeda. nah, jika nilai nilai tersebut berbeda, maka hasil dari operator xor adalah true sedangkan jika nilai nilai tersebut sama maka hasil dari operator xor adalah false.

  return 0;
}