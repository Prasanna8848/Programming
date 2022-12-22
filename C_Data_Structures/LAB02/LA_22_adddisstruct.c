#include<stdio.h>

struct distance{
    int km, meter;
};

void adddistance(struct distance, struct distance);

int main(){
    struct distance d1, d2;
    printf("\n\nEnter distance 1(format km meter):");
    scanf("%d %d", &d1.km , &d1.meter);
    printf("Enter distance 2(format km meter):");
    scanf("%d %d", &d2.km , &d2.meter);
    adddistance(d1, d2);
    return 0;
}

void adddistance(struct distance c1, struct distance c2){
    struct distance final;
    final.meter = c1.meter + c2.meter;
    if(final.meter>=1000){
        final.km = c1.km +c2.km +(final.meter/1000);
        final.meter = final.meter % 1000;
    }
    else{
        final.km = c1.km +c2.km;
    }
    printf("\nThe distance after addition is :%d Km %d meter",final.km,final.meter);
}