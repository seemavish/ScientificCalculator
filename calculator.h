#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

class Calculator
{
public:
    double num1, num2, result;
    int index;
    string operation;
    vector<string> operations;

public:
    Calculator();
    double absolute(double num1);
    double add(double num1, double num2);
    double cosine(double num1);
    double divide(double num1, double num2);
    int getIndex(string operation, vector<string> operations);
    bool isValidOperation(string operation, vector<string> operations);
    double logbase10(double num1);
    double modulus(double num1, double num2);
    double multiply(double num1, double num2);
    double naturalLog(double num1);
    void operate();
    double percentage(double num1, double num2);
    double power(double num1, double num2);
    double sine(double num1);
    double square(double num1);
    double squareroot(double num1);
    double subtract(double num1, double num2);
    double tangent(double num1);
    void viewOperations();
};

#endif