#include <iostream>
using namespace std;
void readTwoNumber(int arr[3])
{
    for(int i=0;i<3;i++)
    {
        cout << "Enter num" << i+1 << "?" << endl;
        cin >> arr[i];
    }
    
}

int findMaxNumber(int arr[3])
{
    int max=arr[0];
    for(int i=1;i<3;i++)
    if(arr[i]>max) max = arr[i];
    return max;

}

void printMax(int max)
{
    cout << "Max = " << max << endl;
}

int main()
{
    int arr[3];
    readTwoNumber(arr);
    printMax(findMaxNumber(arr));
    return 0;
}