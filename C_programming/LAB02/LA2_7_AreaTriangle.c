#include<stdio.h>
#include<math.h>

int main(){
    int a3439, b3439, c3439 ;
    float ar3439 , s3439;
    printf("\n\nEnter the size of three sides of the triangle:");
    scanf("%d %d %d", &a3439, &b3439, &c3439);
    s3439 = (float)((a3439+b3439+c3439)/2);
    ar3439 = sqrt(s3439 * (s3439-a3439) * (s3439-b3439) * (s3439-c3439));
    printf("The area of the triangle is %f\n\n",ar3439);

return 0;
}
