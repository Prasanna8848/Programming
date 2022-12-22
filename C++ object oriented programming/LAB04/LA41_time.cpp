#include<iostream>
using namespace std;

class time1{
    private :
    int hour;
    int minute;
    public :
    time1(){
        hour = 00;
        minute = 00; 
    }
    time1(int h){
        hour =h;
        minute = 00;
    }
    time1(int h , int m){
        hour = h;
        minute = m;
    }
    time1(time1 &t){
        hour = t.hour;
        minute = t.minute;
    }
    void display();
};

void time1::display(){
    cout<<"\n\nThe time is "<<hour<<":"<<minute;
}

int main(){
    int hr,min;
    cout<<"Enter value of hour and minutes";
    cin>>hr>>min;
    time1 t1(hr);
    time1 t2(t1);
    time1 t3(hr ,min);
    t1.display();
    t2.display();
    t3.display();
    return 0;       
}