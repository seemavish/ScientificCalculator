#include "calculator.h"

#include <cmath>
#include <iostream>

Calculator::Calculator()
{
    // operations = {"abs", "+", "cos", "div", "log", "mod", "*", "ln", "%", "^", "sin", "^2", "sqrt", "-", "tan"};
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

double Calculator::absolute(double num1)
{
    return abs(num1);
};

double Calculator::add(double num1, double num2)
{
    return (num1 + num2);
};

double Calculator::cosine(double num1)
{
    return cos(num1);
};

double Calculator::divide(double num1, double num2)
{
    return (num1 / num2);
};

// bool Calculator::isValidOperation(string operation, vector<string> operations)
// {
//     for (int i = 0; i <= operations.size(); ++i)
//     {
//         if (operation == operations[i])
//         {
//             return true;
//         }
//     }
//     return false;
// };

int Calculator::getIndex(string operation, vector<string> operations)
{
    for (int i = 0; i < operations.size(); i++)
    {
        if (operation == operations[i])
        {
            return i;
        }
        else{
            return 0;
        }
    }
}

double Calculator::logbase10(double num1)
{
    return log10(num1);
}

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
