
#include <iostream>
#include <cmath>
using namespace std;
float readFunction()
{
    float d;
    cout << "Enter the diameter of the circle?" << endl;
    cin >> d;
    return d;
}
float circleAreaTD(float d)
{
    return ceil((M_PI*d*d)/4.0);
}
void printFunction(float result)
{
    cout << "Circle area through diameter = " << result << endl;
}
int main()
{
    printFunction(circleAreaTD(readFunction()));
   
    return 0;
}