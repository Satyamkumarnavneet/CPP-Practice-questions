#include <iostream>
using namespace std;
class student
{
    string name,type;
    int roll_no;
    int mark;
    public:
    void ed ()
    {
        cout<<"enter the details(NAME,Type,roll no,mark)"<<endl;
        
    
     cin>>name>>type>>roll_no>>mark;
        
    }
    void show()
    {
        cout<<"Name "<<"Type "<<"roll_no "<<"Mark"<<endl;
        cout<<"*******"<<endl;
        cout<<name<<"     "<<type<<"      "<<roll_no<<"   "<<mark<<endl;
    }
};

int main()
{
    student e[10];
    int n;
    cout<<"Enter numbers of inputs";
    cin>>n;
   for(int i=0;i<n;i++){
       cout<<" student: "<<i+1<<endl;
    e[i].ed();
    }
    for(int i=0;i<n;i++){
    e[i].show();
    }
    return 0;
    
}
