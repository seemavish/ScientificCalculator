#include "calculator.h"
#include "calculator.cpp"

#include <iostream>
using namespace std;

int main()
{
     Calculator calculator;

     // list all the available options for the user to choose from
     calculator.viewOperations();

     // assign operation 
     cout << endl << endl
          << "Enter the operation you wish to perform: " << endl;
     cin >> calculator.operation;

     if (calculator.isValidOperation(calculator.operation, calculator.operations))
     {
          cout << "\nLet's proceed with further steps!" << endl
               << endl;

          cout << "Enter your number (note: trignometric functions take angles in radians): ";
          cin >> calculator.num1;

          // check if the input is of type double
          if (typeid(calculator.num1) == typeid(double)) {
          calculator.operate();}
          else{
               cout << "Invalid datatype! Expected a number" << endl;
          }
     }
     else
     {
          cout << "Incorrect input! Case sensitive operations. Try again" << endl;
     }

     return 0;
}