#include<bits/stdc++.h>
using namespace std;
int main() {
   list<int> mylist;   
    int n;
    cout<<"Enter the numbers: ";
    cin>>n;
    int data;
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        cin>>data;
        mylist.push_back(data);
    }
    cout<<"Enter the numbers you want to find: ";
    int num;
    cin>>num;
    int count=0;
   for(list<int>::iterator head=mylist.begin();head!=mylist.end();head++)
   {
     if(*head==num)
     count++;
   }
    cout<<"The "<<num<<" occurs "<<count<<" times ";
}
