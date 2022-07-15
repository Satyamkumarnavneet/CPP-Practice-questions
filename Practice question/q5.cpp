

#include<fstream>

#include<iostream>

using namespace std;

void vowelword()

{

  string s,k,j;



cout<<"Enter statement:";



getline(cin,s);







char ch[100];



ofstream f1;



f1.open("FIRST.txt");    



f1<<s;



f1.close();       



ifstream f("FIRST.txt");



while(!f.eof())



{



  



 f>>ch;



  



 if(ch[0]=='a'||ch[0]=='e'||ch[0]=='i'||ch[0]=='o'||ch[0]=='u'){



  k=k+" "+ch;



   



}



  



 }



f.close();



ofstream f3;



f3.open("SECOND.txt");



f3<<k;



f3.close();

}

int main()

{

vowelword();

return 0;


}
