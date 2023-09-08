#include "calculator.h"

#include <iostream>
#include <cmath>

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

// double modulus(double num1, double num2){
//     return (num1 % num2);
// };

double multiply(double num1, double num2){
    return (num1 * num2);
};

double power(double num1, double num2){
    return pow(num1,num2);
};

double percentage(double num1, double num2){
    return (num1 / num2) * 100;
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
