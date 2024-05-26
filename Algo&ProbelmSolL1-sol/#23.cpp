#include <iostream>
#include <cmath>
using namespace std;
void readFunction(float &a, float &b, float &c)
{
    cout << "Please enter triangle side A?" << endl;
    cin >> a;
    cout << "Please enter triangle base B?" << endl;
    cin >> b;
    cout << "Please enter triangle side C?" << endl;
    cin >> c;

}
float area(float a,float b,float c)
{
    float p = (a+b+c)/2;
    return round( M_PI*(pow((a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c))),2)) );
}

void printFunction(float result)
{
    cout << "Circle area = " << result << endl;
}
int main()
{
    float a,b,c;
    readFunction(a,b,c);
    printFunction(area(a,b,c));

    return 0;
}