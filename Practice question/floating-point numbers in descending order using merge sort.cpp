#include <iostream>
using namespace std;
void merge_sort(float *arr, int low, int high);
void merge(float *arr, int low, int high, int mid);
int main(){
  float myarray[30];
  int num;
  cout << "\nEnter number of elements to be sorted:\n";
  cin >> num;
  cout << "\nEnter " << num << " elements to be sorted:\n";
  for (int i = 0; i < num; i++){
    cin >> myarray[i];
  }
  merge_sort(myarray, 0, num - 1);
  cout << "Sorted array in descending order\n";
  for (int i = num - 1; i >= 0; i--){
  cout << myarray[i] << "\t";
  }
}
void merge_sort(float *arr, int low, int high){
  int mid;
  if (low < high){
    mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, high, mid);
    }

}
void merge(float *arr, int low, int high, int mid){
  int i, j, k;
  float c[50];
  i = low;
  k = low;
  j = mid + 1;
  while (i <= mid && j <= high){
  if (arr[i] < arr[j])

    {

      c[k] = arr[i];

      k++;

      i++;

    }

    else

    {

      c[k] = arr[j];

      k++;

      j++;

    }

  }

  while (i <= mid)

  {

    c[k] = arr[i];

    k++;

    i++;

  }

  while (j <= high)

  {

    c[k] = arr[j];

    k++;

    j++;

  }

  for (i = low; i < k; i++)

  {

    arr[i] = c[i];

  }

}
