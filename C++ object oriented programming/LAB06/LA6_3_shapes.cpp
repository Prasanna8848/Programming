#include<iostream>
#include<math.h>
using namespace std;

class shape{
    protected:
        float area;
    public:
    shape(){
        area =0;
    }
};

class circle: public shape{
    private:
    float r;
    public:
    void getdatacircle();
    void calcareacircle();
    void displayarea();
};

void circle::getdatacircle(){
    cout<<"\nEnter the radius of the circle :";
    cin>>r;
    calcareacircle();
}

void circle::calcareacircle(){
    area = M_PI*r*r;
}

void circle::displayarea(){
    cout<<"\nThe area of the circle is :"<<area;
}

class triangle: public shape{
    private:
    float a,b,c;
    public:
    void getdatatriangle();
    void calcareatriangle();
    void displayarea();
};

void triangle::getdatatriangle(){
    cout<<"\nEnter the three sides of triangle :";
    cin>>a>>b>>c;
    calcareatriangle();
}

void triangle::calcareatriangle(){
    float s;
    s=(a+b+c)/2;
    area =pow((s*(s-a)*(s-b)*(s-c)),0.5); 
}

void triangle::displayarea(){
    cout<<"\nThe area of the triangle is :"<<area;
}

class rectangle: public shape{
    private:
    float l,b;
    public:
    void getdatarect();
    void calcarearect();
    void displayarea();
};

void rectangle::getdatarect(){
    cout<<"\nEnter the length and breadth of the rectangle :";
    cin>>l>>b;
    calcarearect();
}

void rectangle::calcarearect(){
    area = l*b;
}

void rectangle::displayarea(){
    cout<<"\nThe area of the rectangle is "<<area;
}

int main(){
    circle c1;
    triangle t1;
    rectangle r1;
    c1.getdatacircle();
    t1.getdatatriangle();
    r1.getdatarect();
    c1.displayarea();
    t1.displayarea();
    r1.displayarea();
    return 0;
}