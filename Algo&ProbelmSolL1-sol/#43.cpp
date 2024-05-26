#include <iostream>
#include <cmath>
using namespace std;
struct stTaskDuration
{
    int days,hours,minutes,seconds,remainder;

};
int readPositiveNumber()
{
   int totalSeconds;
   do
   {
        cout << "Enter Total Seconds? " << endl;
        cin >> totalSeconds;
   }while(totalSeconds<0);
   return totalSeconds;
    
}
stTaskDuration calculateTime(int totalSeconds)
{ 
    stTaskDuration duration;
    
    int secondsPerMinutes = 60, secondsPerHours = 60*60, secondsPerDays = 60*60*24;
    duration.days = totalSeconds/secondsPerDays;
    duration.remainder = totalSeconds%secondsPerDays;
    duration.hours = duration.remainder/secondsPerHours;
    duration.remainder= duration.remainder%secondsPerHours;
    duration.minutes=duration.remainder/secondsPerMinutes;
    duration.remainder= duration.remainder%secondsPerMinutes;
    duration.seconds=duration.remainder;
    return duration;
}
void printTime(stTaskDuration duration)
{
    cout << round(duration.days) << ":" << round(duration.hours) << ":" << round(duration.minutes) << ":" << round(duration.seconds) << endl;
}
int main()
{

    printTime(calculateTime(readPositiveNumber()));
    cout << endl;
    printTime(calculateTime(readPositiveNumber()));
    cout << endl;
    printTime(calculateTime(readPositiveNumber()));


    return 0;
}