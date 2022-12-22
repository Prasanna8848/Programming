#include<iostream>
using namespace std;

class Distance{
    public:
        int feet , inches;
        Distance(){
            feet =0;
            inches =0;
        }
        void setdata();
        void showdata();
        void operator++();
};

void Distance::setdata(){
    cout<<"\nEnter the distance in feet and inches :";
    cin>>feet>>inches;
}

void Distance::showdata(){
    cout<<"\nThe distance is : "<<feet<<" feet "<<inches<<" inches.";
}
void Distance::operator++(){
    feet++;
    inches++;
    feet +=inches/12;
    inches %=12;
}

int main(){
    Distance d1;
    d1.setdata();
    d1.showdata();
    ++d1;
    cout<<"\nAfter using unary operator overlaoding";
    d1.showdata();
}