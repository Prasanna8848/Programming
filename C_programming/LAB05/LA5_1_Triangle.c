#include<stdio.h>

int main(){
	int a3439 , b3439  , c3439 ;
	printf("\n\nEnter length of three sides of triangle : ");
	scanf("%d %d %d",&a3439 ,&b3439 ,&c3439);
	if ((a3439 + b3439 > c3439) && (b3439 + c3439 > a3439) && (a3439 + c3439 > b3439)) { 
        printf("Triangle is formed\n");
        if(a3439 == b3439 && b3439 == c3439) {
            printf("it is an equilateral triangle\n\n");
        }
        else if(a3439 == b3439 || b3439 == c3439 || c3439 == a3439){
            printf("it is an isosceles triangle\n\n");
        }
        else{
            printf("it is a scalene triangle\n\n");
        }
	}
	else{
		printf("triangle can not be formed\n\n");
	}
	return 0;
}