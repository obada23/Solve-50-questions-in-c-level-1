#include <iostream>
#include <cmath>
using namespace std;
float readFunction()
{
    float radius;
    cout << "Enter the raduis?" << endl;
    cin >> radius;
    return radius;
}
float calculateCircleArea(float r)
{
    return ceil(M_PI*pow(r,2));
}
void printFunction(float result)
{
    cout << "Circle area = " << result << endl;
}
int main()
{
    printFunction(calculateCircleArea(readFunction()));
   
    return 0;
}