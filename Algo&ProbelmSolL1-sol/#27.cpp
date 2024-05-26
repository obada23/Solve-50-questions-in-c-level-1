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

void printUsingWhile(int n)
{
    cout << "Using while loop?" << endl;
    int i=n;
    while(i>0)
    {
        cout << i << endl;
        i--;
    }
}

void printUsingDoWhile(int n)
{
    cout << "Using do while loop?" << endl;
    int i=n;
    do
    {
        cout << i << endl;
        i--;
    } while(i>0); 
}

void printUsingFor(int n)
{
    cout << "Using for loop?" << endl;
    for(int i=n;i>0;i--)
        cout << i << endl;

}

int main()
{
    int n = read();
    printUsingWhile(n);
    printUsingDoWhile(n);
    printUsingFor(n);
    return 0;
}