#include <iostream>
#include <cmath>
using namespace std;
int readNumber()
{
    int n;
    cout << "Enter the number? " << endl;
    cin >> n;
    return n;
}
void powOf2_3_4(int n)
{
    for(int i=2;i<5;i++)
    cout << n << "^" << i << " = " << round(pow(n,i)) << endl;
}
int main()
{
    
    powOf2_3_4(readNumber());

    return 0;
}