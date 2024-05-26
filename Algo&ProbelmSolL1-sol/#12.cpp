#include <iostream>
using namespace std;
void readTwoNumber(int &num1, int &num2)
{
    cout << "Enter num1?" << endl;
    cin >> num1;
    cout << "Enter num2?" << endl;
    cin >> num2; 
}

int findMaxNumber(int num1, int num2)
{
    int max=num1;
    if(num2>max) max = num2;
    return max;

}

void printMax(int max)
{
    cout << "Max = " << max << endl;
}

int main()
{
    int num1,num2;
    readTwoNumber(num1,num2);
    printMax(findMaxNumber(num1,num2));
    return 0;
}