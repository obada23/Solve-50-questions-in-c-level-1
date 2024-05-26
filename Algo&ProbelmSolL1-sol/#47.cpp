#include <iostream>
using namespace std;
float readPositiveNumber(string message)
{
    float number;
    do
    {
        cout << message << endl;
        cin >> number;

    } while (number<=0);
    
    return number;
}

void print(float loanAmount , float monthlyPayment)
{
    cout << "So, the loan amount " <<  loanAmount <<" you need to pay " << monthlyPayment <<  " each month In this case, it will take time " << loanAmount/monthlyPayment << " Months." <<endl;
}
int main()
{
    
    float loanAmount = readPositiveNumber("Please enter loan amount");
    float monthlyPayment = readPositiveNumber("Please enter monthly payment");
    print(loanAmount,monthlyPayment);
    
    

    return 0;
}