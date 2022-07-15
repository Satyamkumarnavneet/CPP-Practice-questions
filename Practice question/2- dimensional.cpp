#include<iostream>
using namespace std;
int main(){
	//#ifndef ONLINE_JUDGE
	//freopen(_Filename:"input.txt", -_Mode: "r",_File: stdin);
	//freopen(_Fileopen: "output.txt",_Mode: "w", stdout);
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	 cout<<"matrix is:\n";
    for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		cout<<arr[i][j]<<" ";
	}
}
    int x;
 cin>>x;
 bool flag=false;
 for(int i=0; i<n; i++){
	for(int j=0; j<m; j++){
		if(arr[i][j]==x){
			cout<<i<<endl<<j<<endl;
			flag= true;
		}
	}
}
if(flag) {
	cout<<"element is found\n";
}
else{
	cout<<"Element is not found"<<endl;
	
}
	cout<<"\n";
	return 0;
}

 
