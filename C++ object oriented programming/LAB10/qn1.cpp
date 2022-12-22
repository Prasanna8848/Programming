//define a calss called complex that stores the real and imaginary part.
//wap to add, subtract,divide and multiply two or more complex objects
#include<iostream>
#include<math.h>
using namespace std;

class complex{
    float real,imag;
    public:
    complex();
    complex(int , int );
    void show();
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(complex);
    complex operator/(complex);
};

complex::complex(){
    real = 0;
    imag = 0;
}

complex::complex(int x, int y){
    real= x;
    imag =y;
}

void complex::show(){
    cout<<"\ncomplex number  = "<<real<<" + "<<imag<<"i";
}

complex complex::operator+(complex c1){
    complex c2;
    c2.real = real +c1.real;
    c2.imag = imag +c1.imag;
    return c2;
}

complex complex::operator-(complex c1){
    complex c2;
    c2.real = real -c1.real;
    c2.imag = imag -c1.imag;
    return c2;
}

complex complex::operator*(complex c1){
    complex c2;
    c2.real = (real *c1.real)-(imag *c1.imag);
    c2.imag = (imag*c1.real) -(c1.imag*real);
    return c2;
}

complex complex::operator/(complex c1){
    complex c2;
    float f;
    c2.real = (real *c1.real)-(imag *c1.imag);
    c2.imag = (imag*c1.real) -(c1.imag*real);
    f = pow(c1.real,2)+pow(c1.imag,2);
    c2.real /=f;
    c2.imag /=f;
    return c2;
}

int main(){
    complex c1(1,2);
    complex c2(2,3);
    complex c3,c4,c5,c6;
    cout<<"\nAddition overloaded:";
    c3 = c1+c2;
    c3.show();
    cout<<"\nsubtract overloaded:";
    c4 = c2-c1;
    c4.show();
    cout<<"\nMultiply overloaded:";
    c5 = c1*c2;
    c5.show();
    cout<<"\nDivide overloaded:";
    c6 = c1/c2;
    c6.show();
    return 0;
}