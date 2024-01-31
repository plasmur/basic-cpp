#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s = "Bright";
  string &str = s;

  cout << "Initially, value of original string s is " << s << "\n\n";
  cout << "also, value of referenced string str is " << str << "\n\n";

  str = str + "champs";

  cout << "After string manipulation, value of original string is now " << str << endl
       << endl;
  cout << "as a result, value of referenced string s is also " << s << endl;

  return 0;
}