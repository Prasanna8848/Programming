#include<iostream>
using namespace std;

class complex{
    private:
    int real ,imaginary;
    public:
    complex(){
        real=0;
        imaginary =0;
    }
    complex(int i ,int j){
        real=i;
        imaginary =j;
    }
    complex(complex &a){
        real=a.real;
        imaginary =a.imaginary;
    }
    ~complex(){
        cout<<"Destructor Invoked";
    }
    void getdata();
};

void complex::getdata(){
    cout<<"Number : "<<real<<" + "<<imaginary<<" i\n";
}

int main(){
    int i ,j;
    cout<<"Enter the values of complex number (real and imaginary part :";
    cin>>i>>j;
    complex c1;
    complex c2(i,j);
    complex c3(c2);
    c1.getdata();
    c2.getdata();
    c3.getdata();
    return 0;
}