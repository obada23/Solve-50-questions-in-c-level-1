#include <iostream>
using namespace std;
enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };
float readNumber(string message)
{
    int number;
    cout << message << endl;
    cin >> number;
    return number;
   
}

enOperationType readOperationType()
{
    char operation;
    do
    {
        cout << "Enter operation Type( +, -, /, * )? " << endl;
        cin >> operation;

    } while (!(operation=='*'||operation=='/'||operation=='-'||operation=='+'));
    
    
    return (enOperationType)operation;
    
}

float calculate(float num1,float num2,enOperationType op)
{
    switch(op)
    {
        case Multiply : {cout << num1 << " * " << num2 << " = "; return num1*num2;}
        case Divide : {cout << num1 << " / " << num2 << " = "; return num1/num2;}
        case Subtract : {cout << num1 << " - " << num2 << " = "; return num1-num2;}
        case Add : {cout << num1 << " + " << num2 << " = "; return num1+num2;}

    }
    return 1;
    
}

int main()
{cout << "**********************************************" << endl;
    float number1 = readNumber("Please enter the first number?");
    float number2 = readNumber("Please enter the second number?");
    cout << calculate(number1,number2,readOperationType()) << endl;


cout << "**********************************************" << endl;
    return 0;
}