#include <iostream>
#include <string>
using namespace std;

int main()
{
  int grade;
  string name;
  string nis;

  cout << "enter your name: ";
  cin >> name;

  cout << " \nIn which grade do you study (1-12):";
  cin >> grade;

  cout << "\nEnter your NIS:";
  cin >> nis;

  if (grade == 1)
  {
    cout << name << ", you are in grade 1 of middle school"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 2)
  {
    cout << name << ", you are in grade 2 of middle school"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 3)
  {
    cout << name << ", you are in grade 3 of middle school"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 4)
  {
    cout << name << ", you are in grade 4 of middle school"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 5)
  {
    cout << name << ", you are in grade 5 of middle school"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 6)
  {
    cout << name << ", you are in grade 6 of middle school"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 7)
  {
    cout << name << ", you are in grade 1 of junior high"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 8)
  {
    cout << name << ", you are in grade 2 of junior high"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 9)
  {
    cout << name << ", you are in grade 3 of junior high"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 10)
  {
    cout << name << ", you are in grade 1 of senior high"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 11)
  {
    cout << name << ", you are in grade 2 of senior high"
         << "\nAnd your NIS is " << nis;
  }
  else if (grade == 12)
  {
    cout << name << ", you are in grade 3 of senior high"
         << "\nAnd your NIS is " << nis;
  }
  else
  {
    cout << "wrong input, choose your grade "
         << "\nButt your nis is " << nis;
  }
  return 0;
}