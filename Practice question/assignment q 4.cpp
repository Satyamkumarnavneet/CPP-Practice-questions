#include<fstream>
#include<iostream>

 using namespace std;

int main()

{
int l=0,i=0;
char ch;
string s;
cout<<"Enter statement:";
getline(cin,s);
ofstream f1;

f1.open("file1.txt");          //open function

f1<<s;


f1.close();                       
ifstream f("file1.txt");
while(!f.eof())
{
    string b;
    
    f>>b;
    l=l+b.length();
    ++i;
   
}
cout<<"Total character in entered file is "<<(l+i)-1;//-1 for first and last iteration
return 0;

}
