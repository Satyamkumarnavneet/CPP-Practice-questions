#include<bits/stdc++.h>
using namespace std;
int IsEven(int i)
{ return((i%2)==0); }
int main()
{
  int a[]={1,2,3,4,5,6,7,8,9,10};
   vector<int> v1;
vector<int> v2;
   for(int i=0;i<10;i++)
     v1.push_back(a[i]);
       transform(v1.begin(),v1.end(),v2.begin(),IsEven);    // 0 1 0 1 0 1 0 1 0 1 
   vector<int> :: iterator p=v2.begin();
     while(p!=v2.end())
     {     cout<<*p;               // 
             p++;
}
return 0;
}
