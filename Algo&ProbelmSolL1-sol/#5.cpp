#include <iostream>
using namespace std;
struct stInfo
{
    int age;
    bool hasDrivingLicense;
    bool hasRecommendation;

};

stInfo readInfo()
{
    stInfo info;
    cout << "Enter your age?" << endl;
    cin >> info.age;
    cout << "Has driving license?" << endl;
    cin >> info.hasDrivingLicense;
    cout << "Has recommendation?" << endl;
    cin >> info.hasRecommendation;

    return info;

}

bool isAccepted(stInfo info)
{
    return ((info.age>21 && info.hasDrivingLicense)||info.hasRecommendation);
}

void printResult(stInfo info)
{
    if(isAccepted(info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;
}

int main()
{
    printResult(readInfo());
    
    return 0;
}