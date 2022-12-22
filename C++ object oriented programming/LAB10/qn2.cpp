//Define a class called point that stores 3 coordinates x, y, z. 
//wap to overload increment ++ and decrement(--) and unary (-) operator.

#include<iostream>
using namespace std;

class point{
    int x ,y ,z;
    public:
        point();
        point(int , int , int);
        void show();
        point operator++();
        point operator++(int);
        point operator--();
        point operator--(int);
        point operator-();
};

point::point(){
    x=y=z=0;
}

point::point(int i, int j, int k){
    x=i;
    y=j;
    z=k;
}

void point::show(){
    cout<<"\nX = "<<x<<" Y = "<<y<<" Z = "<<z;
}

point point::operator++(){
    ++x;
    ++y;
    ++z;
    return point(x,y,z);
}

point point::operator++(int){
    ++x;
    ++y;
    ++z;
    return point(x,y,z);
}

point point::operator--(){
    x--;
    y--;
    z--;
    return point(x,y,z);
}

point point::operator--(int){
    x--;
    y--;
    z--;
    return point(x,y,z);
}

point point::operator-(){
    x=-x;
    y=-y;
    z=-z;
    return point(x,y,z);
}

int main(){
    point p1(10,20, 30);
    point p2(35, 42, 66);
    cout<<"\n++ operator overloaded:";
    p1 =++p1;
    p1 =p1++;
    p1.show();
    cout<<"\n-- operator overloaded:";
    p2 =p2--;
    p2 =--p2;
    p2.show();
    cout<<"\n- operator overloaded:";
    p1=-p1;
    p1.show();
}