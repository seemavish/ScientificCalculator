#include "calculator.h"

#include <algorithm>
#include <cassert>
#include <cmath>
#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace std;

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
    num1 = new double;
    num2 = new double;
    result = new double;
    index = new int;
    operation = new string;
    input1 = new string;

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

    assert(!operations.empty());
};

Calculator::~Calculator(){
    delete num1;
    delete num2;
    delete result;
    delete index;
    delete operation;
    delete input1;
};

double Calculator::cosine(double num1)
{
    return cos(num1);
};

double Calculator::divide(double num1, double num2)
{
    if (num2 == 0)
    {
        throw runtime_error("Division by 0 is not possible!");
    }
    return (num1 / num2);
};

bool Calculator::isValidOperation(string operation, vector<string> operations)
{
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == operation)
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
        if (operations[i] == operation)
        {
            return i;
        }
    }
    return -1;
}

double Calculator::logbase10(double num1)
{
    if (num1 <= 0)
    {
        throw runtime_error("Logarithm of negative or zero numbers does not exist.");
    }
    return log10(num1);
};

double Calculator::modulus(double num1, double num2)
{
    if (num2 == 0)
    {
        throw runtime_error("Division by 0 is not possible.");
    }
    return fmod(num1, num2);
};

double Calculator::multiply(double num1, double num2)
{
    return (num1 * num2);
};

double Calculator::naturalLog(double num1)
{
    if (num1 <= 0)
    {
        throw runtime_error("Logarithm of negative or zero numbers does not exist.");
    }
    return log(num1);
};

double Calculator::percentage(double num1, double num2)
{
    if (num2 == 0)
    {
        throw runtime_error("Division by 0 is not possible!");
    }
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
    if (num1 < 0)
    {
        throw runtime_error("Square root of a negative number is not possible.");
    }
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

// perform the operation
void Calculator::operate()
{
    stringstream ss(*input1);
    // check if the input is of type double
    if (ss >> *num1)
    {
        // store the index value in variable index
        *index = getIndex(*operation, operations);

        assert(*index >= 0 && *index < operations.size());
        try
        {
            // check if the index of the opertation entered matches with the index in operations array for the respective calculator operation
            // implement the code if condition satified
            switch (*index)
            {
            case 0:
                *result = absolute(*num1);
                cout << "Here is your answer = " << *result << endl;
                break;
            case 1:
                cout << "Enter second number: ";
                cin >> *num2;

                if (cin.fail())
                {

                    // clear input buffer
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw invalid_argument("Invalid datatype! Expected a number.");
                }
                else
                {
                    *result = add(*num1, *num2);
                    cout << "Here is your answer = " << *result << endl;
                }
                break;
            case 2:
                *result = cosine(*num1);
                cout << "Here is your answer = " << *result << endl;
                break;
            case 3:
                cout << "Enter second number: ";
                cin >> *num2;

                if (cin.fail())
                {

                    // clear input buffer
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw invalid_argument("Invalid datatype! Expected a number.");
                }
                else
                {
                    *result = divide(*num1, *num2);
                    cout << "Here is your answer = " << *result << endl;
                }

                break;
            case 4:
                *result = logbase10(*num1);
                cout << "Here is your answer = " << *result << endl;
                break;
            case 5:
                cout << "Enter second number: ";
                cin >> *num2;

                if (cin.fail())
                {

                    // clear input buffer
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw invalid_argument("Invalid datatype! Expected a number.");
                }
                else
                {
                    *result = modulus(*num1, *num2);
                    cout << "Here is your answer = " << *result << endl;
                }

                break;
            case 6:
                cout << "Enter second number: ";
                cin >> *num2;

                if (cin.fail())
                {

                    // clear input buffer
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw invalid_argument("Invalid datatype! Expected a number.");
                }
                else
                {
                    *result = multiply(*num1, *num2);
                    cout << "Here is your answer = " << *result << endl;
                }
                break;
            case 7:
                *result = naturalLog(*num1);
                cout << "Here is your answer = " << *result << endl;
                break;
            case 8:
                cout << "Enter second number: ";
                cin >> *num2;

                if (cin.fail())
                {

                    // clear input buffer
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw invalid_argument("Invalid datatype! Expected a number.");
                }
                else
                {
                    *result = percentage(*num1, *num2);
                    cout << "Here is your answer = " << *result << " %" << endl;
                }

                break;
            case 9:
                cout << "Enter second number: ";
                cin >> *num2;

                if (cin.fail())
                {

                    // clear input buffer
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    throw invalid_argument("Invalid datatype! Expected a number.");
                }
                else
                {
                    *result = power(*num1, *num2);
                    cout << "Here is your answer = " << *result << endl;
                }

                break;
            case 10:
                *result = sine(*num1);
                cout << "Here is your answer = " << *result << endl;
                break;
            case 11:
                *result = square(*num1);
                cout << "Here is your answer = " << *result << endl;
                break;
            case 12:
                *result = squareroot(*num1);
                cout << "Here is your answer = " << *result << endl;
                break;
            case 13:
                cout << "Enter second number: ";
                cin >> *num2;
                *result = subtract(*num1, *num2);
                cout << "Here is your answer = " << *result << endl;
                break;
            case 14:
                *result = tangent(*num1);
                cout << "Here is your answer = " << *result << endl;
                break;
            }
        }
        catch (const exception &e)
        {
            cerr << "Exception: " << e.what() << endl;
        }
    }
    else
    {
        cout << "Invalid datatype! Expected a number" << endl;
    }
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
