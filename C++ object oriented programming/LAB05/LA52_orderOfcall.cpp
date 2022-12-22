#include<iostream>
using namespace std;

class order{
    private:
    int count;
    public:
    order(int c){
        count=c;
        cout<<"\nConstructor inovked order : "<<count;
    }
    ~order(){
        cout<<"\nDestructor inovked order : "<<count;
    }
};

int main(){
    int c=1;
    order o1(c++);
    order o2(c++);
    order o3(c++);
    cout<<"\n";
    return 0;
}