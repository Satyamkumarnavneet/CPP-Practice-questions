#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[10] = {13,3,0,24,23,25,12,1,4};
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
cout<<"UID- 20BCS6132"<<endl;
return 0;
}

