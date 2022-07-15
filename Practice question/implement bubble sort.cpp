#include <bits/stdc++.h>
using namespace std;
int bubbleSort(int arr[], int n){
int swapCount = 1, temp, count = 0;
for (int pass = n - 1; pass >= 0 && swapCount; pass--){
swapCount = 0;
for (int i = 0; i <= (pass - 1); i++){
if (arr[i] > arr[i + 1]){
temp = arr[i];
arr[i] = arr[i + 1];
arr[i + 1] = temp;
swapCount = 1;
count++;
}
}
}
return count;
}
int main(){
int swaps;
int arr[] = {7, 1, 4, 12, 67, 33, 45};
int n = sizeof(arr) / sizeof(arr[0]);
swaps = bubbleSort(arr, n);
cout << "The sorted array is: ";
for (int i = 0; i < n; i++){
cout << arr[i] << " ";
}
cout << endl;
cout << "The number of swaps is: " << swaps << endl;
return 0;
}
