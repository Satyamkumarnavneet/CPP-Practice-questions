//Initialize and print all elements of a 2D array.
#include<iostream>
using namespace std; 
main( ) 
{  
    int arr[2][2] = {
        {1, 2},
        {3, 4}
        };
         
    int i,j;     
    cout<<"Displaying 2D_array:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}
