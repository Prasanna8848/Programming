#include<iostream>
using namespace std;

class date{
    private:
        int day, month, year;
    public:
    date(int i ,int j ,int k){
        year =i;
        month = j;
        day = k;
    }
    void dayssincejan1();
};

void date::dayssincejan1(){
    int m=month-1;
    int d=day;
    while(m!=0){
    if(m==1 || m==3 ||m==5 ||m==7 ||m==8 ||m==10 ||m==12){
        d +=31;
    }
    else if(m==4 || m==6 ||m==9 ||m==11 ){
        d += 30;
    }
    else if(m==2){
        if(((year%4)==0) && (year%100!=0)){
        d += 29;
        }
        else{
            d+=28;
        }
    }
    m--;
    }
    cout<<"\nThe number of days since JAN1 of the year "<<year<<" is "<<d;
}

int main(){
    int d,m,y;
    cout<<"Enter the year month and day :";
    cin>>y>>m>>d;
    date d1(y,m,d);
    d1.dayssincejan1();
    return 0;
}