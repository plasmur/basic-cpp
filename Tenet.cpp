#include <bits/stdc++.h>
using namespace std;

int main()
{

  string word;
  cout << " masukan sebuah kata untuk mengecek adanya palindrome: ";
  cin >> word;

  string revWord = word;

  // membalikan string p
  reverse(revWord.begin(), revWord.end());

  // if word sama besar dengan revword
  if (word == revWord)
  {
    // balik "yes"
    cout << " benar, kata yang dimasukan adalah palindrome! ";
  }

  // kalau tidak
  if (word != revWord)
  {
    // != (adalah bukan)
    cout << " Salah!, kata yang dimasukan bukan palindrome! ";
  }

  return 0;
}