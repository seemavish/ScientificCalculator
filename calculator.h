using namespace std;

class Calculator {
    public:
        double num1, num2;
        char operation;

        // OPERATIONS REQUIRING ATLEAST 2 INPUTS
        double add(double num1, double num2);
        double divide(double num1, double num2);
        double modulus(double num1, double num2);
        double multiply(double num1, double num2);
        double power(double num1, double num2);
        double percentage(double num1, double num2);
        double subtract(double num1, double num2);

        // OPERATIONS REQUIRING ONE INPUT
        double absolute(double num1);
        double cosine(double num1);
        double sine(double num1);
        double squareroot(double num1); 
        double square(double num1);
        double tangent(double num1);
};