#ifndef CALCULATOR_H_
#define CALCULATOR_H_

using namespace std;
#include <vector>

class Calculator
{
public:
    double num1, num2;
    char operation;
    vector<string> operations;

    double absolute(double num1);
    double add(double num1, double num2);
    double cosine(double num1);
    double divide(double num1, double num2);
    bool isValid(char operation);
    double logbase10(double num1, double num2);
    double modulus(double num1, double num2);
    double multiply(double num1, double num2);
    double naturallog(double num1, double num2);
    double percentage(double num1, double num2);
    double power(double num1, double num2);
    double sine(double num1);
    double square(double num1);
    double squareroot(double num1);
    double subtract(double num1, double num2);
    double tangent(double num1);
};

#endif