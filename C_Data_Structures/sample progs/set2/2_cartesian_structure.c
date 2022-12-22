#include<stdio.h>
#include<math.h>

struct distance{
    float x_comp;
    float y_comp;
};
float calcdistance(struct distance, struct distance);
void calcareatriangle(struct distance *);

void main(void){
    int i ;
    float di;
    struct distance d[3];
    printf("Enter data for x_comp and y_comp of 2 points to find distance between them :\n");
    for(i = 0 ; i<2 ; i++){
        printf("distance %d :",(i+1));
        scanf("%f %f",&d[i].x_comp,&d[i].y_comp);
    }
    di=calcdistance(d[0],d[1]);
    printf("\nThe distance between the two points is : %.1f",di);
    printf("\n\nEnter data for x_comp and y_comp of 3 points to find area of triangle :\n");
    for(i = 0 ; i<3 ; i++){
        printf("distance %d :",(i+1));
        scanf("%f %f",&d[i].x_comp,&d[i].y_comp);
    }
    calcareatriangle(d);
}

float calcdistance(struct distance d1,struct distance d2){
    float out;
    out = pow(((pow(d1.x_comp-d2.x_comp,2))+(pow(d1.y_comp-d2.y_comp,2))),0.5);
    return out;
}

void calcareatriangle(struct distance *d){
    int i;
    float dis[3] ,s=0 ,area;
    dis[0]=calcdistance(*d,*(d+1));
    dis[1]=calcdistance(*(d+1),*(d+2));
    dis[2]=calcdistance(*(d+2),*d);
    for( i=0 ; i<3 ;i++){
        s +=dis[i];
    }
    s /=2;
    area = pow((s*(s-dis[0])*(s-dis[1])*(s-dis[2])),0.5);
    printf("\nThe area of the triangle is :%.1f",area);
}