#include <iostream>
using namespace std;

string readPinCode()
{
    string pinCode;
    cout << "Please enter PIN Code: " << endl;
    cin >> pinCode;
    return pinCode;
}

bool login()
{
    string pinCode;
    do
    {
        pinCode = readPinCode();
        if (pinCode == "1234")
            return true;
        else
        {
            // Change text color to red
            cout << "\033[31m"; // ANSI escape code for red
            cout << "Wrong PIN" << endl;
            // Reset text color to default
            cout << "\033[0m"; // ANSI escape code to reset color
        }
    } while (true);
}

int main()
{
    if (login())
    {
        // Change text color to green
        cout << "\033[32m"; // ANSI escape code for green
        cout << "Your account balance = 7500" << endl;
        // Reset text color to default
        cout << "\033[0m"; // ANSI escape code to reset color
    }
    return 0;
}
