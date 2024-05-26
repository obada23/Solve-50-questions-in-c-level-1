#include <iostream>
using namespace std;
struct stPiggyBankContenet
{
    int pennies,nickels,dimes,quarters,dollars;
};
stPiggyBankContenet readPiggyBankContenet()
{
    stPiggyBankContenet currency;
    cout << "Enter pennies? " << endl;
    cin >> currency.pennies;
    cout << "Enter nickels? " << endl;
    cin >> currency.nickels;
    cout << "Enter dimes? " << endl;
    cin >> currency.dimes;
    cout << "Enter quarters? " << endl;
    cin >> currency.quarters;
    cout << "Enter dollors? " << endl; 
    cin >> currency.dollars;

    return currency;
}
int calculateTotalPennies(stPiggyBankContenet currency)
{
    int totalPennies;
    totalPennies = currency.pennies + currency.nickels*5 + currency.dimes*10 +currency.quarters*25 + currency.dollars*100; 
    return totalPennies;
}

void printTotalPennies(int totalPennies)
{
    cout << "Total Pennies = " << totalPennies << endl;
    cout << "Total Dollars = " << totalPennies / 100.0 << endl;
}

int main()
{
    printTotalPennies(calculateTotalPennies(readPiggyBankContenet()));

    return 0;
}