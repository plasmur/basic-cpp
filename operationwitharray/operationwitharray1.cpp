#include <iostream>
using namespace std;

int main()
{

  int marks[10], i;
  float sum = 0;
  cout << "\n Enter marks of each subject (out of 100):\n";
  cout << "\n Geography: ";
  cin >> marks[0];
  cout << "\n english: ";
  cin >> marks[1];
  cout << "\n maths: ";
  cin >> marks[2];
  cout << "\n History: ";
  cin >> marks[3];
  cout << "\n science: ";
  cin >> marks[4];
  cout << "\n sports: ";
  cin >> marks[5];
  cout << "\n arabic: ";
  cin >> marks[6];
  cout << "\n computer: ";
  cin >> marks[7];
  cout << "\n cooking: ";
  cin >> marks[8];
  cout << "\n Law: ";
  cin >> marks[9];

  for (i = 0; i < 10; i++)
  {
    sum = sum + marks[i];
  }

  float avg = sum / 10;
  float per;
  per = (sum / 1000) * 100;
  cout << "\nAverage marks = " << avg;
  cout << "\n percentage = " << per << " % ";

  return 0;
}