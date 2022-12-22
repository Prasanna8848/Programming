#include<iostream>
using namespace std;
class arvol{
    private:
    int c;
    public:
    arvol(int a){
        c=a;
    }
    void square();
    void cube();
};

int main(void){   
    arvol c1(3);
    arvol c2(5);
    c1.square();
    c2.cube();
}

inline void arvol::square(){
    cout<<"\nSquare of the number is :"<<c*c;
}

inline void arvol::cube(){
    cout<<"\nCube of the number is :"<<c*c*c;
}
