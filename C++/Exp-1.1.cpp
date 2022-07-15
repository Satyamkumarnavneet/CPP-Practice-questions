//Write a program to perform Insertion and deletion operation where Let LA is a Linear Array (unordered) 
//with N elements and K is a positive integer such that K<=N.

//#include<iostream>
//using namespace std;
//
//void arr_input(int arr[], int elements){
//        
//    cout<<"Enter the value of elements: ";
//    for (int i = 0; i < elements ; i++){        
//        cin>>arr[i];
//    }
//}
//
//void add_at_index(int arr[], int elements, int x , int n){ 
//    
//    cout<<"Enter the value of the element you want to insert: ";
//    cin>>n;
//    cout<<"Enter the index now: ";
//    cin>>x;
//    
//    for (int i = elements-1; i >= x ; i--){
//        arr[i+1] = arr[i];
//    }
//
//    arr[x] = n;
//
//}
//void delete_at_index(int arr[], int elements, int n){ 
//    
//    cout<<"Enter the index of the element you want to delete: ";
//    cin>>n;
//
//    for (int i = n; i < elements-1; i++)
//    {
//        arr[i] = arr[i+1];
//    }
//}
//
//void display(int arr[] , int elements){
//      for (int i = 0; i < elements; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//
//}
//int main()
//{
//    int n,x,elements,end;
//    int arr[100];
//    
//    cout<<"Enter the number of elements you want to enter: ";
//    cin>>elements;
//     
//    arr_input(arr, elements);
//    cout<<"Original array: ";
//    display(arr , elements);
//    cout<<endl;
//
//    add_at_index(arr, elements, x, n);
//    cout<<"Array after the insertion of value: ";
//    elements = elements + 1;
//    display(arr, elements);
//    cout<<endl;
//
//    delete_at_index(arr, elements, n);
//    cout<<"Array after the deletion of value: ";
//    elements = elements - 1;
//    display(arr, elements);
//    cout<<endl;
//
//    return 0;
//}




//Write a program that performs a traversing operation where Let LA is a Linear Array (unordered) with N elements.
 
#include<iostream>
using namespace std;

int arr_input(int arr[], int elements){
        
    cout<<"Enter the value of elements: ";

    for (int i = 0; i < elements ; i++)
    {        
        cin>>arr[i];
    }
}

int display(int arr[] , int elements){
      for (int i = 0; i < elements; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
      int n,x,elements,end;
    int arr[200];
    
    cout<<"Enter the number of elements you want to enter: ";
    cin>>elements;
    
    arr_input(arr, elements);
    cout<<"Here are the elements in the array: ";
    display(arr,elements);
    

    
}

