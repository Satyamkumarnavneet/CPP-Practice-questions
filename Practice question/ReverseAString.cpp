#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[50], temp;
    int i, j;
    cout<<"Enter string: ";
    gets(str);
    j = strlen(str) - 1;
    for (i = 0; i<j; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout<<"Reverse string is: "<<str<<endl;
    return 0;
}















//
//
//
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//    char str[200], strTemp[200];
//    int len, i=0;
//    cout<<"Enter the String: ";
//    gets(str);
//    while(str[i]!='\0')
//        i++;
//    len = i;
//    strTemp[len] = '\0';
//    len--;
//    i = 0;
//    while(str[i]!='\0')
//    {
//        strTemp[len] = str[i];
//        i++;
//        len--;
//    }
//    i=0;
//    while(strTemp[i]!='\0')
//    {
//        str[i] = strTemp[i];
//        i++;
//    }
//    cout<<"\nReverse = "<<str;
//    cout<<endl;
//    return 0;
//}
