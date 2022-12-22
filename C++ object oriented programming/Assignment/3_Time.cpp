#include<iostream>
using namespace std;

class TIME{
    private:
        int hour;
        int minute;
        int second;
    public:
        TIME(){}
        TIME(int h, int m, int s){
            hour = h;
            minute = m;
            second = s;
        }
        void settime();
        void showtime();
        friend void addtime(TIME ,TIME);
};
void TIME::settime(){
    cout<<"Enter hour minute and seconds";
    cin>>hour>>minute>>second;
}
void TIME::showtime(){
    cout<<"The time is:";
    cout<<hour<<":"<<minute<<":"<<second;
}

void addtime(TIME t1, TIME t2){
    int hr, min, sec;
    sec = t1.second + t2.second;
    min = t1.minute + t2.minute;
    hr = t1.hour + t2.hour;
    if(sec >= 60){
        min += (sec/60);
        sec %=60;
        if(min>=60){
            hr += (min/60);
            min %= 60;
        } 
    }
    else{
        if(min>=60){
            hr += (min/60);
            min %= 60;
        }
    }
    cout<<"\nThe added time is : ";
    cout<<hr<<":"<<min<<":"<<sec;
}

int main(){
    TIME t1(11,24,55);
    TIME t2;
    t2.settime();
    t1.showtime();
    addtime(t1,t2);
    return 0;
}