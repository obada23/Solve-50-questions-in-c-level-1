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

void printRangeFrom1toN_UsingWhile(int n)
{
    cout << "Using While Loop?" << endl;
    int i=1;
    while(i<=n)
    {
        cout << i <<endl;
        i++;
    }
}
void printRangeFrom1toN_UsingDoWhile(int n)
{
    cout << "Using Do While Loop?" << endl;
    int i=1;
    do
    {
        cout << i <<endl;
        i++;
    }while(i<=n);
}
void printRangeFrom1toN_UsingForLoop(int n)
{
    cout << "Using For Loop?" << endl;
    for(int i=1;i<=n;i++)
        cout << i << endl;
}
int main()
{
    int n= read();
    printRangeFrom1toN_UsingWhile(n);
    printRangeFrom1toN_UsingDoWhile(n);
    printRangeFrom1toN_UsingForLoop(n);
    return 0;
}