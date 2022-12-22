#include<iostream>
#include<math.h>
using namespace std;

class area{ 
    private:
    float a,b,c;
    public:
    area(float m){
        a = m;
    }
    area(float m, float n){
        a = m;
        b = n;
    }
    area(float m, float n, float o){
        a = m;
        b = n;
        c = o;
    } 
    void A(float );
    void A(float , float);
    void A( float , float, float);
};
int main(void){
    int r;
    area a1(10.3);
    area a2(10.5,20.2);
    area a3(10.5,15.3,20.1);
    a1.A(0);
    a2.A(0,0);
    a3.A(0,0,0);
    return 0;
}

void area::A(float r){
    float out;
    out = 3.14*a*a;
    cout<<"\nArea of the circle is : "<<out; 
}

void area ::A(float l, float n){
    float out;
    out = a * b;
    cout<<"\nArea of the rectangle is : "<<out; 
}

void area::A(float m, float n, float o){
    float ar , s;
    s=(a+b+c)/2;
    ar = pow(((s-a)*(s-b)*(s-c)),0.5);
    cout<<"\nArea of the triangle : "<<ar;

}
