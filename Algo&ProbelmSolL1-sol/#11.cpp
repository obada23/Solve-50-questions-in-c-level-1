#include <iostream>
using namespace std;
enum enResult {Pass=1, Fail=2};
void Readmarks(int mark[3])
{
    for(int i=0;i<3;i++)
    {
        cout << "Enter Mark " << i+1 << " ?" << endl;
        cin >> mark[i];
    }

}

int calculateSum(int marks[3])
{
    int sum=0;
    for(int i=0;i<3;i++)
        sum+=marks[i];
    return sum;
}

float calculateAverage(int sum)
{
    return sum/3.0;
}

enResult checkFailOrPass(const float avg)
{
    if(avg>=50)
        return Pass;
    else
        return Fail;
}

string printTheResult(enResult result)
{
     if(result==Pass)
            return "Congratulations you passed the class";
        else
            return "Unfortunately you failed the class";

}

int main()
{
    int mark[3];
    Readmarks(mark);
    cout << printTheResult(checkFailOrPass(calculateAverage(calculateSum(mark)))) << endl;
    
    return 0;
}