#include <iostream>
using namespace std;
int readNumber()
{
    int number;
    cout << "Enter the number?" << endl;
    cin >> number;
    return number;
}

float calculateHalfNumber(int number)
{
    
    return number/2.0;
}

void printNumberDividedBy2(int number)
{
   cout << number << "/2 = " << calculateHalfNumber(number) << endl;
}

int main()
{
    printNumberDividedBy2(readNumber());
    return 0;
}