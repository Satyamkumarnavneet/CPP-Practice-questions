#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter 10 elements: ";
    for(int i=0;i<10;i++)
    cin>>arr[i];
    int n,count=0;
    cout<<"Enter the element you want to find:";
    cin>>n;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            cout<<"Element found at index number "<<i<<endl;
            count++;
        }
        else if(i==9 && count==0)
        cout<<"Element not found";
    }
    return 0;
}

