#include "calculator.h"

#include <iostream>

int main()
{
     Calculator calculator;

     // list all the available options for the user to choose from
     calculator.viewOperations();

     // assign operation
     cout << endl
          << endl
          << "Enter the operation you wish to perform: " << endl;
     cin >> calculator.operation;
     try
     {
          if (calculator.isValidOperation(calculator.operation, calculator.operations))
          {
               cout << "\nLet's proceed with further steps!" << endl
                    << endl;

               cout << "Enter your number (note: trignometric functions take angles in radians): ";
               cin >> calculator.num1;

               calculator.operate();
          }
          else
          {
               throw(calculator.operation);
          }
     }

     catch (...) {
          cout << "Incorrect input! Case sensitive operations. Try again" << endl;
     };
     return 0;
}