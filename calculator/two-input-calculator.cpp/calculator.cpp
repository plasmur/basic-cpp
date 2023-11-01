#include <iostream>
#include <string>
using namespace std;

int main()
{
  while (true) // while(true) = forever looping
  {
    int firstNumber, secondNumber;
    char Operator;

    cout << " Enter and operator(+,-,*,/)'q' to quit ";
    cin >> Operator;
    if (Operator == 'q')
    {
      break;
    }

    cout << " Enter The first Number: ";
    cin >> firstNumber;

    cout << " Enter The second Number: ";
    cin >> secondNumber;

    int result;
    if (Operator == '+')
    {
      result = firstNumber + secondNumber;
    }

    else if (Operator == '-')
    {
      result = firstNumber - secondNumber;
    }

    else if (Operator == '*')
    {
      result = firstNumber * secondNumber;
    }

    else if (Operator == '/')
    {
      result = firstNumber / secondNumber;
      if (secondNumber != 0)
      {
        result = firstNumber / secondNumber;
      }
      else
      {
        cout << " Division by zero is not allowed." << endl;
      }
    }

    else
    {
      cout << " invalid/wrong operator " << endl;
    }

    cout << "the result is " << result << endl;
    cout << "------------------" << endl;
  }
}