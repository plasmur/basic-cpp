#include <iostream>
using namespace std;

int addition(int num1, int num2)
{
  return num1 + num2;
}

int subtraction(int num1, int num2)
{
  return num1 - num2;
}

int multiplication(int num1, int num2)
{
  return num1 * num2;
}

double division(int num1, int num2)
{
  return static_cast<double>(num1) / num2;
}

int floor_division(int num1, int num2)
{
  return num1 / num2;
}

int modular(int num1, int num2)
{
  return num1 % num2;
}

int exponent(int num1, int num2)
{
  int result = 1;
  for (int i = 0; i < num2; i++)
  {
    result *= num1;
  }
  return result;
}

int main()
{
  cout << "\n-- Welcome to calculator --" << endl;
  while (true)
  {
    cout << string(40, '-') << endl;
    int first_number, second_number;
    cout << "Enter the first number: ";
    cin >> first_number;
    cout << "Enter the second number: ";
    cin >> second_number;
    cout << "Press 1 for addition" << endl;
    cout << "Press 2 for subtraction" << endl;
    cout << "Press 3 for multiplication" << endl;
    cout << "Press 4 for division" << endl;
    cout << "Press 5 for floor division" << endl;
    cout << "Press 6 for modulus" << endl;
    cout << "Press 7 for exponent" << endl;
    cout << "Press 0 for quit" << endl;
    cout << string(40, '-') << endl;
    int user_choice;
    cout << "Enter your choice: ";
    cin >> user_choice;
    if (user_choice == 1)
    {
      int result = addition(first_number, second_number);
      cout << "Sum of " << first_number << " + " << second_number << " = " << result << endl;
    }
    else if (user_choice == 2)
    {
      int result = subtraction(first_number, second_number);
      cout << "Subtraction " << first_number << " - " << second_number << " = " << result << endl;
    }
    else if (user_choice == 3)
    {
      int result = multiplication(first_number, second_number);
      cout << "Multiplication " << first_number << " x " << second_number << " = " << result << endl;
    }
    else if (user_choice == 4)
    {
      if (second_number == 0)
      {
        cout << "0 is not allowed for division, try again!" << endl;
      }
      else
      {
        double result = division(first_number, second_number);
        cout << "Division " << first_number << " / " << second_number << " = " << result << endl;
      }
    }
    else if (user_choice == 5)
    {
      if (second_number == 0)
      {
        cout << "0 is not allowed for floor division, try again!" << endl;
      }
      else
      {
        int result = floor_division(first_number, second_number);
        cout << "Floor Division " << first_number << " // " << second_number << " = " << result << endl;
      }
    }
    else if (user_choice == 6)
    {
      int result = modular(first_number, second_number);
      cout << "Modulus " << first_number << " % " << second_number << " = " << result << endl;
    }
    else if (user_choice == 7)
    {
      int result = exponent(first_number, second_number);
      cout << "Exponent " << first_number << " ** " << second_number << " = " << result << endl;
    }
    else if (user_choice == 0)
    {
      cout << "You have exited the calculator, Bye!" << endl;
      break;
    }
    else
    {
      cout << "Invalid input, try again!" << endl;
    }
  }
  return 0;
}
