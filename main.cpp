#include "calculator.h"
#include "calculator.cpp"

#include <iostream>
using namespace std;

int main()
{
    Calculator calculator;

    cout << "------------------------------" << endl
         << endl
         << "MY SCIENTIFIC CALCULATOR" << endl
         << endl;

    // list of all the operations the calculator can perform
    cout << "Operations: " << endl << endl;
    cout << "abs" << endl
         << "+" << endl
         << "cos" << endl
         << "div" << endl
         << "log" << endl
         << "mod" << endl
         << "*" << endl
         << "ln" << endl
         << "%" << endl
         << "^" << endl
         << "sin" << endl
         << "^2" << endl
         << "sqrt" << endl
         << "-" << endl
         << "tan" << endl;

    cout << "Enter the operation you wish to perform: " << endl;
    cin >> calculator.operation;
}