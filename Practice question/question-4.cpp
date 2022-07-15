//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle'
//with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
// CPP program to find area
// and perimeter of rectangle
#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
    void Area(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int getArea()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle a1,a2;
    a1.Area(4,5);
    a2.Area(5,8);
    cout << a1.getArea() << endl;
    cout << a2.getArea() << endl;
    return 0;
}
