#include <iostream>
#include <cmath>
using namespace std;
void read(float &number,float &m)
{
    cout << "Enter the number and the power number?" << endl;
    cin >> number >> m; 
}

float calculatePower(float number, float m)
{
    int result=1;
    for(int i=0;i<m;i++)
        result *= number;
    return result;
}

void printPower(float result)
{
    cout << result << endl;
}
int main()
{
    float number,m;
    read(number,m);
    printPower(calculatePower(number,m));

    return 0;
}