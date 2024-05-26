#include <iostream>
using namespace std;
void readFunction(float &a, float &h)
{
    cout << "Please enter triangle base A ? " << endl;
    cin >> a;
    cout << "Please enter triangle height H ? " << endl;
    cin >> h;
}
float calculateTringleArea(float a , float h)
{
    return 0.5*a*h;
}
void printFunction(float result)
{
    cout << "Tringle Area = " << result << endl;
}
int main()
{
    float a,h;
    readFunction(a,h);
    printFunction(calculateTringleArea(a,h));

    return 0;
}