#include "calculator.h"
#include "calculator.cpp"

#include <iostream>
using namespace std;

int main()
{
     int index = 0;
     Calculator calculator;

     calculator.viewOperations();

     cout << endl
          << "Enter the operation you wish to perform: " << endl;
     cin >> calculator.operation;

     // if (calculator.isValidOperation(calculator.operation, calculator.operations))
     // {
     cout << "Let's proceed with further steps!" << endl
          << endl;

     cout << "Enter your number: ";
     cin >> calculator.num1;

     if (calculator.operation == "+" || calculator.operation == "/" || calculator.operation == "mod" || calculator.operation == "-")
     {
          cout << "Enter second number: ";
          cin >> calculator.num2;
     }

     index = calculator.getIndex(calculator.operation, calculator.operations);

     switch (index)
     {
     case 0:
          calculator.result = calculator.absolute(calculator.num1);
          break;
     case 1:
          calculator.result = calculator.add(calculator.num1, calculator.num2);
          break;
     case 2:
          calculator.result = calculator.cosine(calculator.num1);
          break;
     case 3:
          if (calculator.num2 == 0)
          {
               cout << "Division by 0 is not possible!";
          }
          else
          {
               calculator.result = calculator.divide(calculator.num1, calculator.num2);
          }
          break;
     case 4:
          if (calculator.num1 <= 0)
          {
               cout << "Logarithm of negative or zero numbers does not exist.";
          }
          else
          {
               calculator.result = calculator.logbase10(calculator.num1);
          }
          break;
     case 5:
          if (calculator.num1 == 0)
          {
               cout << "Division by 0 is not possible.";
          }
          else
          {
               calculator.result = calculator.modulus(calculator.num1, calculator.num2);
          }
          break;
     case 6:
          calculator.result = calculator.multiply(calculator.num1, calculator.num2);
          break;
     case 7:
          if (calculator.num1 <= 0)
          {
               cout << "Logarithm of negative or zero numbers does not exist.";
          }
          else
          {
               calculator.result = calculator.naturalLog(calculator.num1);
          }
          break;
     case 8:
          calculator.result = calculator.percentage(calculator.num1, calculator.num2);
          break;
     case 9:
          calculator.result = calculator.power(calculator.num1, calculator.num2);
          break;
     case 10:
          calculator.result = calculator.sine(calculator.num1);
          break;
     case 11:
          calculator.result = calculator.square(calculator.num1);
          break;
     case 12:
          calculator.result = calculator.squareroot(calculator.num1);
          break;
     case 13:
          calculator.result = calculator.subtract(calculator.num1, calculator.num2);
          break;
     case 14:
          calculator.result = calculator.tangent(calculator.num1);
          break;
     default:
          cout << "Incorrect input! Case sensitive operations. Try again" << endl;
          break;
     }
     // }
     // else
     // {
     //      cout << "Incorrect input! Case sensitive operations. Try again" << endl;
     // }
     return 0;
}