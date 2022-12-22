#include<stdio.h>

typedef struct {
    int hr;
    int min;
    int sec;
}time ;

void sub(time ,time , time *);

int main(){
    time T1 , T2 , T ;
    printf("\n\nProgram to add two times:\n");
    printf("Enter the first time in 24-hour format ( hr min sec) ");
    scanf("%d %d %d",&T1.hr,&T1.min,&T1.sec);
    printf("Enter the second time in 24 hour format ( hr min sec) ");
    scanf("%d %d %d",&T2.hr,&T2.min,&T2.sec);
    sub(T1 ,T2 , &T);
    printf("The time difference  two times :\nHour = %d \nMinutes = %d \nSeconds = %d\n\n",T.hr,T.min,T.sec);

}

void sub(time t1 , time t2 ,time *t){
    t1.sec = (t1.hr *3600) +(t1.min * 60) +t1.sec;
    t2.sec = (t2.hr *3600) +(t2.min * 60) +t2.sec;
    if (t1.sec>t2.sec){
        t->sec = t1.sec-t2.sec;
    }
    else{
        t->sec = t2.sec-t1.sec;
    }
        t->min = (t->sec / 60) ;
        t->sec = (t->sec %60);
        t->hr = (t->min/ 60);
        t->min =(t->min %60);
}