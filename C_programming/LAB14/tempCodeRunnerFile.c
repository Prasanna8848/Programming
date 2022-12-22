#include<stdio.h>

struct time{
    int hr;
    int min;
    int sec;
};

void add(struct time ,struct time , struct time *);
int main(){
    struct time T1 , T2 , T ;
    printf("\n\nProgram to add two times:\n");
    printf("Enter the first time in format ( hr min sec) ");
    scanf("%d %d %d",&T1.hr,&T1.min,&T1.sec);
    printf("Enter the second time in format ( hr min sec) ");
    scanf("%d %d %d",&T2.hr,&T2.min,&T2.sec);
    add(T1 ,T2 , &T);
    printf("The result after adding two times :\nHour = %d \nMinutes = %d \nSeconds = %d\n\n",T.hr,T.min,T.sec);

}

void add(struct time t1 , struct time t2 , struct time *t){
    t->hr =t1.hr +t2.hr;
    t->min =t1.min + t2.min;
    if ((t->sec =t1.sec+t2.sec)>=60){
        t->min += (t->sec / 60) ;
        t->sec = (t->sec %60);
    }
    if(t->min >= 60){
        t->hr += (t->min / 60) ;
        t->min = (t->min %60);
    }
}