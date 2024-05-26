#include <iostream>
using namespace std;
void readThreeNum(int number[3])
{
    for(int i=0;i<3;i++)
    {
        cout << "Enter number " << i+1 <<"?" << endl;
        cin >> number[i];
    }
}

int sumThreeNum(int arr[3])
{
    int sum=0;
    for(int i=0;i<3;i++)
        sum+=arr[i];
    return sum;
}

void printResult(int total)
{
    cout << "The sum of numbers = " << total << endl;

}
int main()
{
    int number[3];
    readThreeNum(number);
    printResult(sumThreeNum(number));

    return 0;
}