#include<iostream>

using namespace std;

class area{
    private :
    int length;
    int height;
    int ar;
    public :
    area(){
        length = 10;
        height = 20;
    }
    area(int l ,int h){
        length = l;
        height =h;
    }
    area(area &a){
        length = a.length;
        height =a.height;
    }
    void a();
    int display();
};

void area::a(){
    ar = length*height;
}

int area::display(){
    return ar;
}

int main(){
    area c1(200,300);
    area c2(c1);
    area c3;
    c1.a();
    c2.a();
    c3.a();
    cout<<"\nArea of 1st object :"<<c1.display();
    cout<<"\nArea of 2nd object :"<<c2.display();
    cout<<"\nArea of 3rd object :"<<c3.display();
}