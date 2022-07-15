#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000 
class Stack {
    int top; 
public:
    int a[MAX]; 
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
}; 
bool Stack::push(int x){
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
int Stack::pop(){
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek(){
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
} 
bool Stack::isEmpty(){
    return (top<0);
}
int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"Top element: " << s.pop()<<endl;
    cout<<"Elements present in stack : ";
    while(!s.isEmpty()){        
        cout<<s.peek()<<" ";
        s.pop();
    } 
    return 0;
}






































//#include <iostream> 
//#include <stack> 
//using namespace std;
//int main() {
//	stack<int> st;
//	st.push(10);
//	st.push(20);
//	st.push(30);
//	st.push(40);	
//    st.pop();
//	st.pop();
//	while (!st.empty()) {
//		cout <<' '<< st.top();
//		st.pop();
//	}
//}
