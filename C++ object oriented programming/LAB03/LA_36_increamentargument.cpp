#include<iostream>
using namespace std;

class increase{
    private:
    int a;
    public:
    increase(int n){
        a=n;
    }
    void increament();
    int getdata();
};

int main(void){
    int i;
    cout<<"Enter the value of an integer:";
    cin>>i;
    increase r1(i);
    r1.increament();
    cout<<"Output :"<<r1.getdata();
}

void increase::increament(){
    ++a;
}

int increase::getdata(){
    return a;
}