#include <iostream>
using namespace std;
void readMarks(int marks[3])
{
    for(int i=0;i<3;i++)
    {
        cout << "Enter mark " << i+1 << "?" << endl;
        cin >> marks[i];
    }
}

int calculateSum(int marks[3])
{
    int sum = 0;
    for(int i=0;i<3;i++)
        sum+=marks[i];
    return sum;
}

float calculateAverage(int sum)
{
    return sum/3.0;
}

void printScore(float finalScore)
{
    cout << "Your final score is " << finalScore << endl;
}



int main()
{
    int marks[3];
    readMarks(marks);
    printScore(calculateAverage(calculateSum(marks)));

    return 0;
}