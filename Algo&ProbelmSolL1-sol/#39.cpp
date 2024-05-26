#include <iostream>
using namespace std;

void readPositiveNumber(float &bill, float &cashPaid)
{
    do
    {
        cout << "Please enter total bill? " << endl;
        cin >> bill;
        cout << "Please enter total cash paid?" << endl;
        cin >> cashPaid;

    } while (bill<=0||cashPaid<=0);
     
}
void calculateRemainder(float totalBill,float totalCashPaid)
{
    cout << "Remainder = " << totalCashPaid - totalBill << endl;
}


int main()
{
    float totalBill, totalCashPaid;
    readPositiveNumber(totalBill,totalCashPaid);
    calculateRemainder(totalBill,totalCashPaid);
    return 0;
}