#include<iostream>
using namespace std;

class noobjects{
    private:
    static int count;
    public:
    noobjects(){
        countincreament();
    }
    static void countincreament();
    static void displaycount();
    ~noobjects(){
      cout<<"\nDestructor invoked object number : "<<count--;  
    }
};

void noobjects::countincreament(){
    count++;
}
void noobjects::displaycount(){
    cout<<"Number of object : "<<count;
}

int noobjects::count=0;

int main(){
    noobjects n1;
    noobjects n2;
    noobjects n3;
    noobjects n4;
    noobjects::displaycount();
    return 0;
}