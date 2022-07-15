//default copy constructor//

#include<iostream>

using namespace std;

class point

{

   private:

   int x,y;

   public:

   point(int x1,int y1)

   {

     x=x1;

     y=y1;

   }

   int getX()

   {

     return x;

   }

   int getY()

   {

     return y;

   }

   

};



int main()

{

   point p1(10,20);

   point p2(p1);

   cout<<"P1.x : "<<p1.getX()<< "P1. y :"<<p1.getY()<<endl;

   cout<<"p2.x : "<<p2.getX()<<"P2.y : "<<p2.getY();

   return 0;

   

   

}

