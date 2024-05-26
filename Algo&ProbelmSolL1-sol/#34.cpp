#include <iostream>
using namespace std;

float readTotalSales()
{
    int totalSales;
    do
    {
        cout << "Enter Total Sales?" << endl;
        cin >> totalSales;

    }while(totalSales<0);
    return totalSales;
    
}

float getComissionPercentage(float totalSales)
{
    if(totalSales>1000000)
        return 0.01;
    else if(totalSales>500000)
        return 0.02;
    else if(totalSales>100000)
        return 0.03;   
    else if(totalSales>50000)
        return 0.05;
    else 
        return 0;
       
}

float printTotalSales(float TotalSales)
{
    return getComissionPercentage(TotalSales) * TotalSales;
    

}

int main()
{
    float totalSales = readTotalSales();
    cout << "Comission Percentage = " << getComissionPercentage(totalSales) << endl;
    cout << "Total Comission = " << printTotalSales(totalSales) << endl;

    
    return 0;
}