#include "calculator.h"

#include <iostream>

int main()
{
     Calculator* calculator = new Calculator;

     // list all the available options for the user to choose from
     calculator->viewOperations();

     // assign operation
     cout << endl
          << endl
          << "Enter the operation you wish to perform: " << endl;
     cin >> *(calculator->operation);
     try 
     {
          if (calculator->isValidOperation(*(calculator->operation), calculator->operations))
          {
               cout << "\nLet's proceed with further steps!" << endl
                    << endl;

               cout << "Enter your number (note: only radians for angles): ";
               cin >> *(calculator->input1);

               calculator->operate();
          }
          else
          {
               throw invalid_argument("Incorrect input! Case sensitive operations. Try again");
          }
     }

     catch (const exception& e) {
          cerr << "Exception: " << e.what() << endl;
     };

     delete calculator;

     return 0;
}