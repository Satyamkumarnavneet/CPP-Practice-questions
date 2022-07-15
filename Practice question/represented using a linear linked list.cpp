#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;          
    struct node *next;  

};
struct node *front =NULL;
struct node *rear = NULL;
void enque (int x){
	struct node *temp = new node();
	temp->data=x;
	temp->next= NULL;
	if(front==NULL && rear ==NULL){
		front =rear =temp;
		return ;
	}
	rear ->next =temp;
	rear=temp;	
}
void dequeue(){
	struct node*temp =front;
	if(front ==NULL)
	return;
	if(front ==rear){
		front =rear =NULL;
	}
	else{
		front = front->next;
	}
	free (temp);
}
void display(){
	struct node* temp=front;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	enque(30);
	enque(40);
	enque(50);
	dequeue();
	display();
	return 0;
}

