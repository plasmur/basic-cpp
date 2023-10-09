#include <iostream>
#include <string>
using namespace std;

int main()
{
  double marks;

  cout << " Enter your marks: ";
  cin >> marks;

  // ternary operator mengecek jika angka diatas 40 string result = (examValue >= 40) ?" passed " : " failed "
  string result = (marks >= 40) ? " passed " : " failed ";
  cout << "ini pakai Ternary operator: "
       << "\n";
  cout << " anda " << result << " the exam " << endl;
  // kalau pake if
  cout << "ini pakai if statements: "
       << "\n";

  if (marks >= 40)
  {
    cout << " you passed the exam " << endl;
  }
  else
  {
    cout << " You failed the exam" << endl;
  }
  return 0;
}
