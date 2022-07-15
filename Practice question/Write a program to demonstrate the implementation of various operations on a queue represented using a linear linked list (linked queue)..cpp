#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;               
    struct Node* next;      
}*rear = NULL, *front = NULL;
struct Node* newNode(int item){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node != NULL){ // set data in the allocated node and return it
        node->data = item;
        node->next = NULL;
        return node;
    }
    else {
        printf("\nHeap Overflow");
        exit(EXIT_FAILURE);
    }
}
int dequeue()        // delete at the beginning
{
    if (front == NULL)
    {
        printf("\nQueue Underflow");
        exit(EXIT_FAILURE);
    }
 
    struct Node* temp = front;
    printf("Removing %d\n", temp->data);
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    int item = temp->data;
    free(temp);
    return item;
}
void enqueue(int item)        // insertion at the end
{
    struct Node* node = newNode(item);
    printf("Inserting %d\n", item);
    if (front == NULL) {

        front = node;
        rear = node;
    }
    else {
        rear->next = node;
        rear = node;
    }
}
int peek(){
    if (front != NULL) {
        return front->data;
    }
    else {
        exit(EXIT_FAILURE);
    }
}
 
// Utility function to check if the queue is empty or not
int isEmpty() {
    return rear == NULL && front == NULL;
}
 
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4); 
    enqueue(5);
	enqueue(6);  
    printf("The front element is %d\n", peek()); 
    dequeue();
    dequeue();
    dequeue();
    dequeue(); 
    if (isEmpty()) {
        printf("The queue is empty");
    }
    else {
        printf("The queue is not empty");
    }
 
    return 0;
}


