#include<iostream>
using namespace std;
void subsets(int arr[], int n){
	for(int i =0; i<( 1<<n); i++){
		for(int j=0; j<n; j++){
			if(i &(1<<j)){
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
	}
}
int main (){
	int arr[5]= {2,4,6,8,10};
	subsets(arr, 5);
	return 0;
}



