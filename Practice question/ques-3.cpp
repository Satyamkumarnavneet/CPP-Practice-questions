//Write a function which asks the user for height, width and length of a cuboid objects.
//This function should run 3 times. These three cuboid shapes are due to be stacked on top of each other
//in a packaging box Use another function to determine and display the smallest size (by displaying height, length and width) 
//of the box which could be used for packaging when these three boxes are stacked.

#include<iostream>
#include<malloc.h>
#define MAX 10
using namespace std;
class Stack
{
int stack[MAX], top=-1;
public:
int l, b, h;

void push(int stack[], int val)
{
    if(top == MAX - 1)
    {
        cout<<"Stack Is Overflow"<<endl;
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

void dimension()
{
    cout<<"Enter Length - "; cin>>l;
    cout<<"Enter Breadth - "; cin>>b;
    cout<<"Enter Height - "; cin>>h;
}

void dim_stack_pushing()
{
    push(stack,l);
    push(stack,b);
    push(stack,h);
}

};

int main()
{
    Stack S1, S2, S3;
    int l_1, b_1, h_1;
    cout<<"\n\nEnter Dimensions Of Cubiod 1\n"; S1.dimension(); S1.dim_stack_pushing();  
    cout<<"\n\nEnter Dimensions Of Cubiod 2\n"; S2.dimension(); S2.dim_stack_pushing(); 
    cout<<"\n\nEnter Dimensions Of Cubiod 3\n"; S3.dimension(); S3.dim_stack_pushing();
    
    if(S1.l>=S2.l && S1.l>=S3.l)  {l_1=S1.l;}
    else if(S3.l>=S1.l && S2.l>=S3.l) {l_1=S2.l;}
    else if(S3.l>=S3.l && S3.l>=S3.l) {l_1=S3.l;}
    if(S1.b>=S2.b && S1.b>=S3.b)  {b_1=S1.b;}
    else if(S3.b>=S1.b && S2.b>=S3.b) {b_1=S2.b;}
    else if(S3.l>=S3.l && S3.l>=S3.l) {b_1=S3.b;}
    
    cout<<"\nThe Smallest Box Dimensions Required For Packaging All Three Boxes When Joined In Stack Are As Follows\n";
    cout<<"\nHeight - "<<l_1;
    cout<<"\nBreadth - "<<b_1;
    cout<<"\nHeight - "<<S1.h+S2.h+S3.h;

    return 0;
}
