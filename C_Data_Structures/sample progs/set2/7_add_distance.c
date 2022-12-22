#include<stdio.h>

struct distance{
    int km;
    int m;
};

struct distance *adddistance(struct distance *, struct distance *);

void main(void){
    struct distance d1 ,d2 , *o ;
    printf("\nEnter the distance in kilometer-meter format :");
    printf("\nDistance 1 :");
    scanf("%d %d",&d1.km ,&d1.m);
    printf("\nDistance 2 :");
    scanf("%d %d",&d2.km ,&d2.m);
    o = adddistance(&d1,&d2);
    printf("\n\nThe result after adding two distances is %d kilometer %d meter.",o->km,o->m);
}

struct distance *adddistance(struct distance *dist1, struct distance *dist2){
    struct distance *out;
    out->m = dist1->m + dist2->m;
    if(out->m >1000){
        out->km = dist1->km + dist2->km + (out->m/1000);
        out->m =(out->m) % 1000;
    }
    else{
        out->km = dist1->km + dist2->km;
    }
    return out;
}