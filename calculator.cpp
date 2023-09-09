#include "calculator.h"

#include <cmath>
#include <iostream>

double Calculator::absolute(double num1)
{
    return abs(num1);
};

double Calculator::add(double num1, double num2)
{
    return (num1 + num2);
};

// list of operations this calculator can perform
Calculator::Calculator()
{
    operations.push_back("abs");
    operations.push_back("+");
    operations.push_back("cos");
    operations.push_back("/");
    operations.push_back("log10");
    operations.push_back("mod");
    operations.push_back("*");
    operations.push_back("ln");
    operations.push_back("percent");
    operations.push_back("^");
    operations.push_back("sin");
    operations.push_back("^2");
    operations.push_back("sqrt");
    operations.push_back("-");
    operations.push_back("tan");
};

Calculator::~Calculator(){};

double Calculator::cosine(double num1)
{
    return cos(num1);
};

double Calculator::divide(double num1, double num2)
{
    return (num1 / num2);
};

bool Calculator::isValidOperation(string operation, vector<string> operations)
{
    for (int i = 0; i <= operations.size(); ++i)
    {
        if (operation == operations[i])
        {
            return true;
        }
    }
    return false;
};

// get the index of the input operation (needed for switch)
int Calculator::getIndex(string operation, vector<string> operations)
{
    for (int i = 0; i < operations.size(); i++)
    {
        if (operation == operations[i])
        {
            return i;
        }
    }
    return -1;
}

double Calculator::logbase10(double num1)
{
    return log10(num1);
};

double Calculator::modulus(double num1, double num2)
{
    return fmod(num1, num2);
};

double Calculator::multiply(double num1, double num2)
{
    return (num1 * num2);
};

double Calculator::naturalLog(double num1)
{
    return log(num1);
};

// perform the operation
void Calculator::operate()
{
    // store the index value in variable index
    index = getIndex(operation, operations);

    // check if the index of the opertation entered matches with the index in operations array for the respective calculator operation
    // implement the code if condition satified
    switch (index)
    {
    case 0:
        result = absolute(num1);
        cout << "Here is your answer = " << result << endl;
        break;
    case 1:
        cout << "Enter second number: ";
        cin >> num2;
        if (typeid(num2) == typeid(double))
        {
            result = add(num1, num2);
            cout << "Here is your answer = " << result << endl;
        }
        else
        {
            cout << "Invalid datatype! Expected a number." << endl;
        }
        break;
    case 2:
        result = cosine(num1);
        cout << "Here is your answer = " << result << endl;
        break;
    case 3:
        cout << "Enter second number: ";
        cin >> num2;
        if (typeid(num2) == typeid(double))
        {
            if (num2 == 0)
            {
                cout << "Division by 0 is not possible!";
            }
            else
            {
                result = divide(num1, num2);
                cout << "Here is your answer = " << result << endl;
            }
        }
        else
        {
            cout << "Invalid datatype! Expected a number." << endl;
        }
        break;
    case 4:
        if (num1 <= 0)
        {
            cout << "Logarithm of negative or zero numbers does not exist.";
        }
        else
        {
            result = logbase10(num1);
            cout << "Here is your answer = " << result << endl;
        }
        break;
    case 5:
        cout << "Enter second number: ";
        cin >> num2;
        if (typeid(num2) == (typeid(double)))
        {
            if (num1 == 0)
            {
                cout << "Division by 0 is not possible.";
            }
            else
            {
                result = modulus(num1, num2);
                cout << "Here is your answer = " << result << endl;
            }
        }
        else
        {
            cout << "Invalid datatype! Expected a number." << endl;
        }
        break;
    case 6:
        cout << "Enter second number: ";
        cin >> num2;
        if ((typeid(num2) == typeid(double)))
        {
            result = multiply(num1, num2);
            cout << "Here is your answer = " << result << endl;
            break;
        }
        else
        {
            cout << "Invalid datatype! Expected a number." << endl;
        }
    case 7:
        if (num1 <= 0)
        {
            cout << "Logarithm of negative or zero numbers does not exist.";
        }
        else
        {
            result = naturalLog(num1);
            cout << "Here is your answer = " << result << endl;
        }
        break;
    case 8:
        cout << "Enter second number: ";
        cin >> num2;
        if (typeid(num2) == typeid(double))
        {
            if (num2 == 0)
            {
                cout << "Division by 0 is not possible!";
            }
            result = percentage(num1, num2);
            cout << "Here is your answer = " << result << endl;
        }
        else
        {
            cout << "Invalid datatype! Expected a number." << endl;
        }
        break;
    case 9:
        cout << "Enter second number: ";
        cin >> num2;
        if (typeid(num2) == typeid(double))
        {
            result = power(num1, num2);
            cout << "Here is your answer = " << result << endl;
        }
        else
        {
            cout << "Invalid datatype! Expected a number." << endl;
        }
        break;
    case 10:
        result = sine(num1);
        cout << "Here is your answer = " << result << endl;
        break;
    case 11:
        result = square(num1);
        cout << "Here is your answer = " << result << endl;
        break;
    case 12:
        if (num1 < 0)
        {
            cout << "Square root of a negative number is not possible.";
        }
        else
        {
            result = squareroot(num1);
            cout << "Here is your answer = " << result << endl;
        }
        break;
    case 13:
        cout << "Enter second number: ";
        cin >> num2;
        result = subtract(num1, num2);
        cout << "Here is your answer = " << result << endl;
        break;
    case 14:
        result = tangent(num1);
        cout << "Here is your answer = " << result << endl;
        break;
    }
}

double Calculator::percentage(double num1, double num2)
{
    return (num1 / num2) * 100;
};

double Calculator::power(double num1, double num2)
{
    return pow(num1, num2);
};

double Calculator::sine(double num1)
{
    return sin(num1);
};

double Calculator::square(double num1)
{
    return pow(num1, 2);
};

double Calculator::squareroot(double num1)
{
    return sqrt(num1);
};

double Calculator::subtract(double num1, double num2)
{
    return (num1 - num2);
};

double Calculator::tangent(double num1)
{
    return tan(num1);
};

void Calculator::viewOperations()
{
    cout << "------------------------------" << endl
         << endl
         << "MY SCIENTIFIC CALCULATOR" << endl
         << endl;

    // list of all the operations the calculator can perform
    cout << "Operations available: " << endl
         << endl;
    for (int i = 0; i < operations.size(); i++)
    {
        cout << operations[i] << " | ";
    }
};
