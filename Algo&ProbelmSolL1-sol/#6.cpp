#include <iostream>
using namespace std;

struct stName
{
    string firstName;
    string lastName;
};

stName readName()
{
    stName name;
    cout << "Enter first name?" << endl;
    cin >> name.firstName;
    cout << "Enter last name?" << endl;
    cin >> name.lastName;

    return name;
}

string getFullName(stName name)
{
    string gname = "";
    gname = name.firstName + " " + name.lastName;
    return gname;
}

void printFullname(string name)
{
    cout << "Your full name is " << name << endl;
}

int main()
{
    printFullname(getFullName(readName()));
    return 0;
}