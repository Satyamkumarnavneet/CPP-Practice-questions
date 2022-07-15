//Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.

#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10];
    for(int i=0;i<10;i++)
    {
        cout << "Enter a number: ";
        cin >> a[i];
    }
    int j = 0;
    for(int i=9;i>=0;i--)
    {
        b[i] = a[j];
        j++;
    }
    cout<<"In reverse order: ";
    for(int i=0;i<10;i++)
    {
        cout << b[i] <<"\t";
    }
    return 0;
}								



