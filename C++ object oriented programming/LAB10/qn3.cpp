//define class called distance that stores feet and inches. 
//wap to overload greater than , less than ,!= and = operator.


#include<iostream>
using namespace std;

class Distance{
    int feet , inches;
    public:
    Distance(){
        feet = inches =0;
    }
    Distance(int x , int y){
        feet =x;
        inches = y;
    }
    void show();
    bool operator<(Distance);
    bool operator>(Distance);
    void operator=(Distance);
    bool operator!=(Distance);
};

void Distance::show(){
    cout<<"\nFeet = "<<feet<<"\nInches = "<<inches;
}
bool Distance::operator>(Distance d){
    if(feet>d.feet){
        return true;
    }
    else if(feet==d.feet &&inches>d.inches){
        return true;
    }else{
    return false;
    }
}

bool Distance::operator<(Distance d){
    if(feet<d.feet){
        return true;
    }
    else if(feet==d.feet &&inches<d.inches){
        return true;
    }else{
    return false;
    }
}

bool Distance::operator!=(Distance d){
    if(feet!=d.feet &&inches!=d.inches){
        return true;
    }else{
    return false;
    }
}

void Distance::operator=(Distance d){
    feet = d.feet;
    inches = d.inches;
}

int main(){
    Distance d1(15,5);
    Distance d2(20,1);
    Distance d3(20,1);
    if(d1>d2){
        cout<<"\nDistance 1 is greater than distance 2";
    }
    else{
        cout<<"\nDistance 1 is not greater than distance 2";
    }
    if(d1<d2){
        cout<<"\nDistance 1 is less than distance 2";
    }
    else{
        cout<<"\nDistance 1 is not less than distance 2";
    }
    if(d2!=d3){
        cout<<"\nDistance 2 is not equal to distance 3";
    }
    else{
        cout<<"\nDistance 2 is equal to distance 3";
    }
    cout<<"\nOverloading = operator to copy distance 1 to distance 3";
    d3 = d1;
    d3.show();
}