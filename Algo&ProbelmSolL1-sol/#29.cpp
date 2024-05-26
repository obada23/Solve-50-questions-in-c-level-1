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

int sumEvenNumber(const int n)
{
    int sum=0;
    for(int i=0;i<=n;i+=2)
        sum+=i;
    return sum;
}

void print(int sumEven)
{
    cout << "Sum Even = " << sumEven << endl;
}

int main()
{
    print(sumEvenNumber(read()));

    return 0;
}