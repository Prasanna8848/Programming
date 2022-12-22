#include<stdio.h>

int main(){
	int mon3439;
	printf("\n\nEnter any number(1-12):");
	scanf("%d",&mon3439);
        switch(mon3439){
		case 1 : printf("The month is January and no. of days = 31\n\n\n\n");
			 break;
		case 2 : printf("The month is february and no. of days = 28\n\n");
                         break;
		case 3 : printf("The month is March and no. of days = 31\n\n");
                         break;
		case 4 : printf("The month is April and no. of days = 30\n\n");
                         break;
		case 5 : printf("The month is May and no. of days = 31\n\n");
                         break;
		case 6 : printf("The month is June and no. of days = 30\n\n");
                         break;
		case 7 : printf("The month is July and no. of days = 31\n\n");
                         break;
		case 8 : printf("The month is August and no. of days = 31\n\n");
                         break;
		case 9 : printf("The month is September and no. of days = 30\n\n");
                         break;
		case 10 : printf("The month is October and no. of days = 31\n\n");
                         break;
		case 11 : printf("The month is November and no. of days = 30\n\n");
                         break;
		case 12 : printf("The month is December and no. of days = 31\n\n");
                         break;
		default : printf("invalid input! Input should be between 1-12\n\n");
		}
	return 0;
}