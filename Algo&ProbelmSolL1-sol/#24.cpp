#include <iostream>
using namespace std;
int readAge()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    return age;
}
bool validateNumberInRange(int age , int From ,int To)
{
    return (age>=From && age <= To);
}

void printResult(int age)
{
    if(validateNumberInRange(age,18,45))
        cout << age << " Is a valid age " << endl;
    else
        cout << age << " Is invalid age " << endl;

}
int main()
{
    printResult(readAge());
    
    return 0;
}