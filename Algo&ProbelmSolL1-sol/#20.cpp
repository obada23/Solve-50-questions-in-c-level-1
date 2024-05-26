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
float circleAreaInscribedInASquare(float A)
{
    return ceil(M_PI * pow((A/2),2));
}
void printFunction(float result)
{
    cout << "Circle area inscribed in a square = " << result << endl;
}
int main()
{
    printFunction(circleAreaInscribedInASquare(readFunction()));
   
    return 0;
}