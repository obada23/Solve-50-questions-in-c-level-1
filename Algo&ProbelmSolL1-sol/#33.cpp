#include <iostream>
using namespace std;
void readNumberInRange(int &grade,int from , int to)
{
    do
    {
        cout << "Enter grade?" << endl;
        cin >> grade;
    }while(grade<from||grade>to);
    
}

char checkYourMark(int grade)
{
    if(grade>=90)
        return 'A';
    else if(grade>=80)
        return 'B';
    else if(grade>=70)
        return 'C';
    else if(grade>=60)
        return 'D';
    else if(grade>=50)
        return 'F';
    else
        return 'E';

}

void printYourMark(char grade)
{
    cout << "Your mark is " << grade << endl;
}
int main()
{
    int grade;
    readNumberInRange(grade,0,100);
    printYourMark(checkYourMark(grade));
    
     

    return 0;
}