#include <iostream>
#include <cmath>
using namespace std;
float readFunction()
{
    float L;
    cout << "Please enter circumference?" << endl;
    cin >> L;
    return L; 
}
float circleAreaAlongTheCircumference(float L)
{
    return floor((L*L)/(4*M_PI));
}

void printFunction(float result)
{
    cout << "Circle Area Along The Circumference = " << result << endl;
}
int main()
{
    printFunction(circleAreaAlongTheCircumference(readFunction()));
    
    return 0;
}