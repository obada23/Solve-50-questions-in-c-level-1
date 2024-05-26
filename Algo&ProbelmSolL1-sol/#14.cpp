#include <iostream>
using namespace std;

void readFunction(int &number1,int &number2)
{
    cout << "Enter number1 : ";
    cin >> number1;
    cout << "Enter number2 : ";
    cin >> number2;
}

void swapFumction(int &number1,int &number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;

}

void printFunction(const int number1,const int number2)
{
    cout << "The numbers after swap is:- " << endl;
    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;
}

int main()
{
    int number1,number2;
    readFunction(number1,number2);
    swapFumction(number1,number2);
    printFunction(number1,number2);
    

    return 0;
}