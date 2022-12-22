#include<iostream>
using namespace std;

class Distance{
    public:
        int feet, inches;
        void add(Distance , Distance);
        Distance addc(Distance); 
};

void Distance::add (Distance c1, Distance c2){
    inches = c1.inches + c2.inches;
    if(inches >=12){
        feet = c1.feet + c2.feet + (inches/12);
        inches %= 12;
    }
    else{
        feet = c1.feet + c2.feet;
    }
}

Distance Distance::addc(Distance d){
    Distance a;
    a.inches = inches + d.inches;
    if(a.inches >=12){
        a.feet = feet + d.feet + (a.inches/12);
        a.inches %= 12;
    }
    else{
        a.feet = feet + d.feet;
    }
    return a;
}

int main(void){
    Distance c1 , c2 , c3 , c4;
    cout<<"Enter two distances in feet and inches";
    cout<<"\nfeet\tInches\n";
    cin>>c1.feet >>c1.inches >>c2.feet>>c2.inches;
    c3.add(c1 ,c2);
    cout<<"\nDistance after addition by first method : "<<c3.feet<<" feet "<<c3.inches<<" inches.";
    c4 = c1.addc(c2);
    cout<<"\nDistance after addition by second method : "<<c4.feet<<" feet "<<c4.inches<<" inches.";
    return 0;
}
