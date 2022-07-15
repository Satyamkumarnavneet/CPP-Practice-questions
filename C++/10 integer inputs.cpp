// Take 10 integer inputs from user and store them in an array and print them on screen.

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter a number: ";
        cin>> a[i];
    }
    cout << "Here are the numbers :\n";
    for(int i=0;i<10;i++)
    {
        cout << a[i] << "\t";
    }
    return 0;
}	
