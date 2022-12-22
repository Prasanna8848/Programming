#include<iostream>
using namespace std;

class base1{
    public:
    base1(){
        cout<<"\nBase class 1 is created";
    }
    ~base1(){
        cout<<"\nBase class 1 is destroyed";
    }
};

class base2{
    public:
    base2(){
        cout<<"\nBase class 2 is created";
    }
    ~base2(){
        cout<<"\nBase class 2 is destroyed";
    }
};

class child:public base2, public base1{
    public:
    child(){
        cout<<"\nChild class is created";
    }
    ~child(){
        cout<<"\nChild class is destroyed";
    }
};

int main(){
    child c1;
    return 0;
}