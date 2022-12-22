#include<iostream>
using namespace std;

class Distance{
    protected:
        int feet;
        int inches;
    public:
        Distance(){
            feet =0;
            inches =0;
        }
        void setdata();
        void show();
        Distance operator+(Distance);
        //friend Distance operator+(int , Distance);
};

void Distance::setdata(){
    cout<<"\nEnter the Distance in feet and inches :";
    cin>>feet>>inches;
}

void Distance::show(){
    cout<<"\nThe Distance in feet and inches are : "<<feet<<" feet "<<inches<<" inches.";
}

Distance Distance::operator+(Distance d1){
    Distance temp;
    temp.feet = feet + d1.feet;
    temp.inches = inches + d1.inches;
    temp.feet  += temp.inches/12;
    temp.inches %= 12;
    return temp;
}

Distance Distance::operator+( Distance d){
    Distance temp;
    temp.inches = d.inches + operator;
    temp.feet = d.feet;
    temp.feet += temp.inches / 12;
    temp.inches %= 12;
    return temp;  
}
int main(){
    Distance d1,d2,d3;
    cout<<"\nUsing binary operator";
    d1.setdata();
    d2.setdata();
    d3 = d1+d2;
    d1.show();
    d2.show();
    cout<<"\n Using binary operator member function:";
    d3.show();
    cout<<"\n Using friend function:";
    d2 = 4 + d1;
    d2.show();
    return 0;
}