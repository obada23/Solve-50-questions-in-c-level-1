#include <iostream>
#include <cmath>
using namespace std;
void readNumberOfHours(int &number)
{
    do{
        cout << "Enter the number? " << endl;
        cin >> number;

    }while(number<0);

}
float hoursToDays(int number)
{
    return number/24.0;
}
float hoursToWeaks(int number)
{
    return number/24.0/7.0;
}
void printTheNumberOfDaysAndWeaks(int number)
{
    cout << "Total Hours = " << number << endl;
    cout << "Total Days = " << hoursToDays(number) << endl;
    cout << "Total Weaks = " << hoursToWeaks(number) << endl;
}
int main()
{
    int number;
    readNumberOfHours(number);
    printTheNumberOfDaysAndWeaks(number);
    
    
    return 0;
}