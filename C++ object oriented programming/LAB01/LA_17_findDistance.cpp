#include<iostream>
#include<math.h>
using namespace std;

class Distance{
    private:
    float x_comp ,y_comp;
    public:
        void setdata(float x , float y);
        void showdis();
};

void Distance::setdata(float x , float y){
    x_comp =x;
    y_comp =y;
}

void Distance::showdis(){
    float dis;
    dis = pow(((pow(x_comp,2))+(pow(y_comp,2))),0.5);
    cout<<"\nThe distance between two points is : "<<dis;
}

int main(){
    Distance d1;
    float x, y;
    cout<<"\nEnter the x  and y coordinates of a point :";
    cin>>x>>y;
    d1.setdata(x ,y);
    d1.showdis();
    return 0;
}