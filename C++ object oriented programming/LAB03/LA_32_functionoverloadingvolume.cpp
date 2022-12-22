#include<iostream>
#include<math.h>
using namespace std;

class vol{
    private:
    float l , b, h;
    public:
    vol(float m){
        l = m;
    }
    vol(float m, float n){
        l = m;
        b = n;
    }
    vol(float m, float n, float o){
        l = m;
        b = n;
        h =o;
    }
    void volume(float );
    void volume(float , float);
    void volume( float , float, float);
};

void vol::volume(float r){
    float a;
    a = (4/3)*M_PI*l*l*l;
    cout<<"\nVolume of the Sphere is "<<a; 
}

void vol::volume(float r, float c){
    float a;
    a = M_PI*l*l*b;
    cout<<"\nVolume of cylinder is "<<a; 
}

void vol::volume (float a, float d, float c ){
    float ar;
    ar = l*b*h;
    cout<<"\nVolume of Cuboid :"<<ar;
}

int main(void){
    vol v1(10);
    vol v2(10,20);
    vol v3(10,15,20);
    v1.volume(0);
    v2.volume(0,0);
    v3.volume(0,0,0);
    return 0;
}

