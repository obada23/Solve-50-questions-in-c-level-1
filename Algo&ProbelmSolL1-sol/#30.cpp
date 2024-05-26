#include <iostream>
#include <cmath>
using namespace std;
int readNumber(string message)
{
    int n;
    do
    {
        cout << message << endl;
        cin >> n; 

    } while(n<=0);
    
    return n;
}

int findFactorial(int n)
{
    int result=1;
    for(int i=n;i>0;i--)
    {
        result*=i;
        if(i!=1)
            cout << i << " * ";
        else 
            cout << i << " = ";

    } 
    return result;

}

void printFactorial(int result)
{

    cout << result << endl;

}

int main()
{
    
   printFactorial(findFactorial(readNumber("Please enter the posotive number?")));


    return 0;
}