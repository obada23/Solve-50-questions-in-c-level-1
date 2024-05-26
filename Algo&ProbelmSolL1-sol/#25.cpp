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

int checkAge(int From,int To)
{
    int age =0;
    do
    {
        age = readAge();

    }while(!validateNumberInRange(age,From,To));
    return age;
    
}

void printResult(int age)
{
    if(validateNumberInRange(age,18,45))
        cout << age << " Is a valid age " << endl;

}
int main()
{
    printResult(checkAge(18,45));
    
    return 0;
}