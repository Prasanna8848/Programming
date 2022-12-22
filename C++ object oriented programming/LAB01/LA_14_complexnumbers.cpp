#include<iostream>

using namespace std;

class complex{
    private:
    int real, imaginary;
    public:
    void setdata();
    void getdata();
};

void complex::setdata(){
    cin>>real;
    cin>>imaginary;
}
void complex::getdata(){
    cout<<real<<" + "<<imaginary<<"i , ";
}

int main(void){
    complex c[10];
    int i;
    for(i =0; i<= 9 ;i++){
        cout<<"\nEnter the real and imaginary part for complex number "<<(i+1)<<" :";
        c[i].setdata();
    }
    cout<<"\n\nThe 10 complex numbers are :\n\n";
    for(i =0; i<= 9 ;i++){
        c[i].getdata();
    }
    return 0;
}