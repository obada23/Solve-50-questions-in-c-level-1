#include <iostream>
using namespace std;

struct stInfo
{
    bool hasDrivingLicense;
    int age;
};

stInfo readInfo()
{
    stInfo info;
    cout << "Enter your age? " << endl;
    cin >> info.age;
    cout << "Has driver license? " << endl;
    cin >> info.hasDrivingLicense;

    return info;

}

bool isAccepted(stInfo info)
{
    return (info.age>21 && info.hasDrivingLicense);
        
}

void printResult(stInfo info)
{
    if(isAccepted(info))
        cout << "Hired " << endl;
    else 
        cout << "Rejected " << endl;
}

int main()
{
    printResult(readInfo());
    
    return 0;
}