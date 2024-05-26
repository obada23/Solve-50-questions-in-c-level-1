#include <iostream>
using namespace std;
int readMonth(string message,int from, int to)
{
    int month;
    while(true)
    {
        cout << "Please enter month (1-12):" << endl;
        cin >> month;
        if(month>=from && month <=to)
            break;
    }
    return month;
    
}

void printMonth(int month)
{
    string strmonth[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    cout << strmonth[month - 1] << endl;
}

int main()
{
    
    printMonth(readMonth("Please enter month (1-12):",1,12));

    return 0;
}