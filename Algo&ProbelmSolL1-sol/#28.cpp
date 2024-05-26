#include <iostream>
#include <cmath>
using namespace std;
int read()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    return n;
}

int sumOddNumber(const int n)
{
    int sum=0;
    for(int i=1;i<=n;i+=2)
        sum+=i;
    return sum;
}

void print(int sumOdd)
{
    cout << "Sum Odd = " << sumOdd << endl;
}

int main()
{
    print(sumOddNumber(read()));

    return 0;
}