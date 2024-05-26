#include <iostream>
using namespace std;

string printname(string name)
{
    return name;
}

string readname(string &name)
{
    cout << "Enter your name?"<<endl;
    getline(cin,name);
    return name;
}

int main()
{
    string name;
    
    cout << printname(readname(name)) << endl;
   
    return 0;
}