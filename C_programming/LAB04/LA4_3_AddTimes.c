#include <stdio.h>
int main() {
    int hr3439 , hr13439 , hr23439 , m3439 , m13439 , m23439 , s3439 , s13439, s23439;
    //input hour first and then press enter to input minutes and repeat same for sec.
    printf("\n\nEnter the first time (hr:mm:ss) : ");
    scanf("%d:%d:%d", &hr13439 , &m13439 , &s13439);
    printf("Enter the another time : ");
    scanf("%d:%d:%d", &hr23439 , &m23439 , &s23439);
    s3439 = s13439 + s23439;
    m3439 = m13439 + m23439;
    hr3439 = hr13439 + hr23439;
    if (s3439 >= 60){
        m3439 = m3439 +(s3439/60);
        s3439 = s3439 % 60;
    }
    if (m3439 >= 60){
        hr3439 = hr3439 + (m3439/60);
        m3439 = m3439 % 60;
    }
    printf("The sum of two times is %dhr:%dm:%ds",hr3439 ,m3439 ,s3439);
    return 0;
}
