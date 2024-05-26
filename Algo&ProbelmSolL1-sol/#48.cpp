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

void print(float loanAmount , float payLoanAmount)
{
   cout << "So, the loan amount " <<  loanAmount <<" you need to finish paying the loan in  "
    << payLoanAmount <<  " month , In this case you will pay " << loanAmount/payLoanAmount << " every month " <<endl;
}
int main()
{
    
    float loanAmount = readPositiveNumber("Please enter loan amount?");
    float payLoanAmount = readPositiveNumber("Please enter how many months do you need to pay the loan amount?");
    print(loanAmount,payLoanAmount);
    
    

    return 0;
}