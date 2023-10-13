#include <iostream>
#include <string>
using namespace std;

int main()
{
  while (true) // while(true) = forever looping
  {
    int firstNumber, secondNumber;
    char Operator;

    cout << " Enter The first Number: ";
    cin >> firstNumber;

    cout << " Enter The second Number: ";
    cin >> secondNumber;

    cout << " Enter and operator(+,-,*,/)'q' to quit ";
    cin >> Operator;

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

    else if (Operator == 'q')
    {
      break;
    }

    else
    {
      cout << " invalid/wrong operator " << endl;
    }

    cout << "the result is " << result << endl;
    cout << "------------------" << endl;
  }
}