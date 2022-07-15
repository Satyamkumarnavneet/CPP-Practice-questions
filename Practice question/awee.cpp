#include<iostream>

#include<fstream>

using namespace std;

int main()

{

char arr[100];

cout<<"Enter your name and address :"<<endl;

cin.getline(arr,100);

ofstream myfile("Hello.txt");

myfile<<arr;

myfile.close();

cout<<"File write operation completed "<<endl;

return 0;

}
