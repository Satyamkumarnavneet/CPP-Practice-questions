#include <iostream>
using namespace std;
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n,i;
    cout<<"Enter the number of elements in the array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRotate(arr, 2, n);
    printArray(arr, n);
 
    return 0;
}



