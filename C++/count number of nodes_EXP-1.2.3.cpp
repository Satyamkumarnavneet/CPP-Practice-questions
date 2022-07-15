#include<iostream>
using namespace std;
int n=1;
struct node{
int data;
node* left;
node* right;
};
struct node* getNode(int data) {
node* newNode=new node();
newNode->data=data;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct node* Insert(struct node* root, int data){
if (root == NULL)
return getNode(data);
if (data < root->data)
root->left = Insert(root->left, data);
else if (data > root->data)
root->right = Insert(root->right, data);
return root;
}
int CountNodes(node*root)
{
if(root==NULL)
return 0;
if(root->left!=NULL)
{
n=n+1;
n=CountNodes(root->left);
}
if(root->right!=NULL)
{
n=n+1;
n=CountNodes(root->right);
}
return n;
}
int main()
{  
node* root=NULL;
root=Insert(root,4);
Insert(root,3);
Insert(root,2);
Insert(root,5);
Insert(root,9);
Insert(root,7);
cout<<"Total number of Nodes in the Binary Search: "<<CountNodes(root)<<endl;
return 0;
}

