#include <iostream>
#include <cmath>
using namespace std;
void readFunction(float &a, float &d)
{
    cout << "Please enter rectangle side A ? " << endl;
    cin >> a; 
    cout << "Please enter rectangle diagonal D ? " << endl;
    cin >> d; 
}
float calculatearea(float a,float d)
{
    return a * sqrt(pow(d,2)-pow(a,2));
}
void printFunction(float result)
{
    cout << "area = " << result << endl;
}
int main()
{
    float a,d;
    readFunction(a,d);
    printFunction(calculatearea(a,d));

    return 0;
}