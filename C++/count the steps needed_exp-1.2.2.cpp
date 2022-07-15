#include<iostream>
using namespace std;
int main() {
    int n,value;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter value: ";
    for (int i = 0; i < n; i++){
    cin>>arr[i];  
    }
    cout<<"Enter value to delete: ";
    cin>>value;
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while (start<= end){
    if (arr[mid] == value){
    arr[mid] = -1;
    break;
    }
    if (arr[mid]>value) {
    end= mid - 1;
    }
    else if (arr[mid]<value){
    start = mid + 1;
    }
    mid = (start + end) / 2;
    }
   cout<<"After delete:"<<endl;
   for (int i = 0; i < n; i++){
   if(arr[i] != -1){
   cout << arr[i] << " ";
   }
}
 return 0;
}

