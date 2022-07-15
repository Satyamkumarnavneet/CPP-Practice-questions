#include <bits/stdc++.h>
using namespace std;
struct MyStack{
  string arr[50];
  int cap = 50;
  int top = -1;
  void push(string x){
    if (top == cap - 1){
      cout << "Stack is full" << endl;
      return;
    }
    top++;
    arr[top] = x;
}

string pop(){
    if (top == -1)
	return "Stack is Empty";
    string res = arr[top];
    top--;
    return res;
  }
string peek()  {

    if (top == -1)

      return "Empty";

    return arr[top];

  }
 int size() {

    return (top + 1);

  }
  bool isEmpty(){
    return top == -1;
}
};
int main(){

  MyStack s = MyStack();
  s.push("Satyam");
  s.push("Kreeti");
  s.push("abc");
  cout << s.pop() << endl;
  cout << s.size() << endl;
  cout << s.peek() << endl;
  cout << s.isEmpty() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.isEmpty();
  return 0;

}
