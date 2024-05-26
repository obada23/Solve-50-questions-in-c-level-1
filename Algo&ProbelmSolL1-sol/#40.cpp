#include <iostream>
using namespace std;

float readPositiveNumber()
{
    float totalBill;
    do
    {
        cout << "Please enter total bill? " << endl;
        cin >> totalBill;

    } while (totalBill<=0);
    
    return totalBill;
     
}
void totalBillAfterServiceAndTax(float totalBill)
{
    float serviceFee = 0.1 , saleTax = 0.16;
    cout << "Total bill including service fee and sales tax = " << totalBill + serviceFee*totalBill + saleTax*totalBill << endl;
}


int main()
{
    totalBillAfterServiceAndTax(readPositiveNumber());
    return 0;
}