#include <iostream>
#include <cmath>
using namespace std;
void readFunction(float &a, float &b)
{
    cout << "Please enter triangle side A?" << endl;
    cin >> a;
    cout << "Please enter triangle base B" << endl;
    cin >> b;
}
float circle_area_inscribed_in_a_isosceles_tringl(float a,float b)
{
    return floor(M_PI*((b*b)/4)*((2*a-b)/(2*a+b)));
}

void printFunction(float result)
{
    cout << "Circle area inscribed in a isosceles tringle = " << result << endl;
}
int main()
{
    float a,b;
    readFunction(a,b);
    printFunction(circle_area_inscribed_in_a_isosceles_tringl(a,b));
    
    return 0;
}