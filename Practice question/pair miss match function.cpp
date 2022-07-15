#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int> demolist;
 demolist.push_back(10);
 demolist.push_back(20);
 demolist.push_back(20);
demolist.push_back(30);
  demolist.push_back(40);
   cout<<count(demolist.begin(),demolist.end(),20);    //2
   list<int> :: iterator p=demolist.begin();
     while(p!=demolist.end())
     {     cout<<*p;               //10 20 20 30 40
             p++;
}
return 0;
}
