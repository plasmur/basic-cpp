#include <iostream>
#include <string>
using namespace std;

int main()
{
  double umur;
  cout << " masukan umur Anda: ";
  cin >> umur;

  // ternary
  string result = (umur >= 18) ? " bisa " : " belum bisa ";
  cout << " Menggunakan ternary "
       << " \n ";

  cout << " Anda " << result << " memilih presiden " << endl;

  cout << " menggunakan if, elif, else "
       << "\n";

  if (umur >= 18)
  {
    cout << "you can choose your future " << endl;
  }
  else
  {
    cout << " you cant choose your future " << endl;
  }
  return 0;
}