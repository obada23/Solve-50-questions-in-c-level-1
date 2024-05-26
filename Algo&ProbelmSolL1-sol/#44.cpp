#include <iostream>
using namespace std;
enum enDayOfWeak {Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7};
int readNumberOfRange(string message, int from, int to)
{   
    int number;
    do
    {
        
        cout << message << endl;
        cin >> number;

    } while (number<from||number>to);
    return number;
    
}
enDayOfWeak readDayOfWeak()
{
    
    return  (enDayOfWeak)readNumberOfRange("Please enter number of day?",1,7);

}
string getDayOfWeak(enDayOfWeak day)
{
    switch(day)
    {
        case Sat : return "Saturday";
        case Sun : return "Sunday";
        case Mon : return "Monday";
        case Tue : return "Tuesday";
        case Wed : return "Wednesday";
        case Thu : return "Thursday";
        default  : return "Friday";
    }
}
int main()
{cout << "-------------------------------------------" << endl;
   
   cout << getDayOfWeak(readDayOfWeak()) << endl;

    cout << "-------------------------------------------" << endl;
    return 0;
}