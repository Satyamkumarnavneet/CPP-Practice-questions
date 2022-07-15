#include <iostream>

using namespace std;
class Box {

  public:

     Box() {

        cout << "Constructor called!" <<endl;

   }

     ~Box() {

        cout << "Destructor called!" <<endl;

     }

};

int main() {

  Box* myBoxArray = new Box[4];

  delete [] myBoxArray; 
  cout<<"Name - Satyam kumar navneet UID-20bcs4588 \n"<<endl;


  return 0;
}
