#include<iostream>
using namespace std;

class distance2;
class distance1{
    private:
    float feet , inches;
    public: 
    void setdata();
    friend void largest(distance1 ,distance2);
};

void distance1::setdata(){
    cout<<"Enter first distance (feet & inches) : ";
    cin>>feet>>inches;
}

class distance2{
    private:
    float meter , centim;
    public:
    void setdata();
    friend void largest(distance1, distance2);
};
void distance2::setdata(){
    cout<<"Enter second distance (meter & centimeter) : ";
    cin>>meter>>centim;
}

void largest(distance1 a, distance2 b){
    float feets, meters;
    feets = a.feet + (a.inches / 12);
    meters = b.meter +(b.centim/100);
    
    if(feets > (meters*3.281)){
        cout<<a.feet<<" feet "<<a.inches<<" inches is greater length";
    }
    else{
        cout<<b.meter<<" meter "<<b.centim<<" centimeters is greater length";
    }
}


int main(void){
    distance1 d1;
    distance2 d2;
    d1.setdata();
    d2.setdata();
    largest(d1 ,d2);
}