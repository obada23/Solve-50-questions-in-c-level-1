#include <iostream>
using namespace std;
enum enNumberType {Odd=1, Even=2};
int readNumber()
{
    int n;
    cout << "Enter a number?" << endl;
    cin >> n;
    return n;
}

enNumberType CheckNumberType(int n)
{
    if(n%2==0)
        return Even;
    else
        return Odd;
}

void printNumberType(enNumberType numberType)
{
    if(numberType == Even)
        cout << "The number is even" << endl;
    else    
        cout << "The number is odd" << endl;
    
}


int main()
{
    printNumberType(CheckNumberType(readNumber()));
    
    return 0;
}