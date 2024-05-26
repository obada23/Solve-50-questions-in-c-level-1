#include <iostream>
using namespace std;
enum enPassFail {Pass=1, Fail=2};
int readMark()
{
    int mark;
    cout << "Enter mark ?" << endl;
    cin >> mark;

    return mark;
}

enPassFail checkMark(const int mark)
{
    if(mark>=50)
        return Pass;
    else
        return Fail;
}

void printMark(const int mark)
{
    if(checkMark(mark)== Pass)
        cout << "You passed" << endl;
    else
        cout << "You Faild" << endl;

}



int main()
{
    
    printMark(readMark());
    
    
    return 0;
}