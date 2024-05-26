#include <iostream>
#include <cmath>
using namespace std;
struct Clock
{
    int days;
    int hours;
    int minutes;
    int seconds;
};

Clock readClock()
{
    Clock c;
    cout << "Enter number of days?" << endl;
    cin >> c.days;
    cout << "Enter number of hours?" << endl;
    cin >> c.hours;
    cout << "Enter number of minutes?" << endl;
    cin >> c.minutes;
    cout << "Enter number of seconds?" << endl;
    cin >> c.seconds;

    return c; 
}

float calculateClockInSeconds(Clock c)
{
    return c.seconds + c.minutes*60 + c.hours*60*60 + c.days*24*60*60;
}

void printTotalSeconds(float totalSeconds)
{
    cout << "Total seconds = " << totalSeconds << endl;
}

int main()
{

    printTotalSeconds(calculateClockInSeconds(readClock()));
    
    return 0;
}