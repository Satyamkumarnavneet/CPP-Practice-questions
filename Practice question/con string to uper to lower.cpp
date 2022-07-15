#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str ="duigougoubb";
	
   /*cout<<'a'-'A'<<endl;
   
   //convert into upper case
   
   for(int i=0; i<str.size(); i++)
  {
   	if(str[i]>= 'a' && str[i]<='z')
   	str[i] -=32;
   }
   cout<<str<<endl;
   
   //convert to lower case
   
   for(int i=0; i<str.size(); i++)
   {
   	if(str[i]>= 'A' && str[i]<= 'z')
   	str[i]+=32;
   }
   cout<<str<<endl; */
   
  transform(s.begin(), s.end(), s.begin(), ::toupper);
  
   cout<<s<<endl;



	return 0;
}
