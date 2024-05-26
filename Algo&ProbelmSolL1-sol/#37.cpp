#include <iostream>
using namespace std;
void readFunction(int &n)
{
    cout << "Read the number?" << endl;
    cin >> n; 
}

int sumFunction(int n)
{
    int sum=0;
    while(n!=-99)
    {
        sum+=n;
        readFunction(n);
    }
    return sum;

}

void printSum(int sum)
{
    cout << "Sum = " << sum << endl;

}

int main()
{
    int n;
    readFunction(n);
    printSum(sumFunction(n));
    
    
        

    return 0;
}