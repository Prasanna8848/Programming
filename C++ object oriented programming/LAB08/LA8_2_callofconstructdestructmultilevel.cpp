#include<iostream>
using namespace std;

class grandparent{
    public:
    grandparent(){
        cout<<"\nGrandparent class is created";
    }
    ~grandparent(){
        cout<<"\nGrandparent class is destroyed";
    }
};

class parent:public grandparent{
    public:
    parent(){
        cout<<"\nParent class is created";
    }
    ~parent(){
        cout<<"\nParent class is destroyed";
    }
};

class child:public parent{
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