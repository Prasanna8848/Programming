#include<stdio.h>

int main(){
	int mark3439;
	printf("\n\nEnter your mark secured in the exam :");
	scanf("%d", &mark3439);
	if (mark3439 <=100 && mark3439>=90){
		printf("You obtained Grade O.\n\n");
	}
	else if(mark3439 <=89 && mark3439>=80){
		printf("You obtained Grade E.\n\n");
	}
	else if(mark3439 <=79 && mark3439>=70){
        printf("You obtained Grade A.\n\n");
        }    
	else if(mark3439 <=69 && mark3439>=60){
        printf("You obtained Grade B.\n\n");
        }
	else if(mark3439 <=59 && mark3439>=50){
        printf("You obtained Grade C.\n\n");
        }
	else if(mark3439 <=49 && mark3439>=40){
        printf("You obtained Grade D.\n\n");
        }
	else if(mark3439 <=39 && mark3439>=0){
		printf("You obtained Grade F.\n\n");
	}
    else{
        printf("Invalid Marks");
    }
	return 0;
}