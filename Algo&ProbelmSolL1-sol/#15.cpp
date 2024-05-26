#include <iostream>
using namespace std;
void readFunction(float &a, float &b)
{
    cout << "Please Enter Rectangle Width A?" << endl;
    cin >> a;
    cout << "Please Enter Rectangle Width B?" << endl;
    cin >> b;

}
float rectangleArea(float a,float b)
{
    return a*b;
}

void printrectangleArea(float result)
{
    cout << "Rectangle area = " << result << endl;
}
int main()
{
    float a,b;
    readFunction(a,b);
    
    printrectangleArea(rectangleArea(a,b));

    return 0;
}