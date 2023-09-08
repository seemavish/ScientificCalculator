#include "calculator.h"

#include <cmath>

vector<string> operations = {"abs", "+", "cos", "div", "log", "mod", "*", "ln", "%", "^", "sin", "^2", "sqrt", "-", "tan"};

double absolute(double num1){
    return abs(num1);
};

double add(double num1, double num2){
    return (num1 + num2); 
};

double cosine(double num1){
    return cos(num1);
};

double divide(double num1, double num2){
    return (num1 / num2);
};

bool isValid(string operation){
    for(int i = 0; i < operations.length(); i++){
        try {
            if (operation in operations) {
                cout << "Let's proceed with further steps!" << endl;
                return true;
            }
            else{
                throw operation;
            }
        }
        catch (...) {
            cout << "Incorrect input! Case sensitive operations. Try again";
            return false;
        }
    }
};

double logbase10(double num1){
    return log10(num1);
}

double modulus(double num1, double num2){
    return fmod(num1, num2);
};

double multiply(double num1, double num2){
    return (num1 * num2);
};

double naturallog(double num1, double num2){
    return log(num1);
};

double percentage(double num1, double num2){
    return (num1 / num2) * 100;
};

double power(double num1, double num2){
    return pow(num1,num2);
};

double sine(double num1){
    return sin(num1);
};

double square(double num1){
    return pow(num1, 2);
};

double squareroot(double num1){
    return sqrt(num1);
};

double subtract(double num1, double num2){
    return (num1 - num2);
};

double tangent(double num1){
    return tan(num1);
};
