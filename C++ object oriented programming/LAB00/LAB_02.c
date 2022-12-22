#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[25];
    int rollno;
    float marks[5];
    float total;
    float percentage;
};

void calc( struct student *, int);
void search(int ,int , struct student *);
void percentagesearch(int ,float ,float , struct student *);
void sort(int , struct student *);

void main(){
    int n ,i ,j , sroll ;
    float upercent , lpercent;
    struct student *s;
    printf("Enter the no of students to store data:");
    scanf("%d",&n);
    s = (struct student *) calloc(n , sizeof(struct student));
    if (s == NULL){
        printf("Memory allocation failed!!!!!!!");
    }
    else{
        for (j=0;j<n;j++){
            printf("\nEnter the details of the student %d :",(j+1));
            printf("\nEnter the Name of the student :");
            gets(s[j].name);
            gets(s[j].name);
            printf("\nEnter the Roll No. of the student :");
            scanf("%d",&s[j].rollno);
            printf("\nEnter the marks of the student in 5 subjects :");
            for (i=0;i<=4;i++){
                printf("\nEnter the marks of subject %d :",(i+1));
                scanf("%f",&s[j].marks[i]);
            }
            calc(s , j);
        }

        do{
            printf("\n\nEnter the roll no of the student to get the details: (press '0' to leave the search)");
            scanf("%d",&sroll);
            if (sroll == 0){
                break;
            }
            search(n , sroll , s);
            
        } while ( sroll != 0 );

        printf("\n\nEnter the range of perecntage to find the student obtaining it: (lower range, upper range)");
        scanf("%f %f",&lpercent ,&upercent);
        percentagesearch(n , lpercent ,upercent , s);
        sort(n , s);
        printf("\n\n<----------Details of students after sorting------------>\n");
        for (j=0;j<n;j++){
            printf("\nName of the student is : %s",s[j].name);
                    printf("\nRoll No. of the student  is : %d",s[j].rollno);
                    printf("\nMarks of the student in 5 subjects :");
                    for (i=0;i<=4;i++){
                        printf("\n The marks in subject %d is : %0.1f",(i+1),s[j].marks[i]);  
                    }
                    printf("\nThe total marks obtained by the student is : %0.1f",s[j].total);
                    printf("\nThe total percentage obtained by the student is : %0.1f\n\n",s[j].percentage);
        }
    }
}


// function to total marks and percentage obtained by all the students.
void calc( struct student *s , int index){
    int i;
    s +=index;
    s->total = 0;
    for(i =0 ; i<= 4;i++){
        s->total += s->marks[i];
    } 
    s->percentage =(((s->total)/500)*100);
}

//funtion to display details of the student with given roll no.

void search(int n ,int roll , struct student *s){
    int i , j ,bol =0;
    for (j = 0 ; j<n ; j++){
        if (s[j].rollno == roll){
            printf("<------------details found--------------->");
            printf("\nName of the student is : %s",s[j].name);
            printf("\nRoll No. of the student  is : %d",s[j].rollno);
            printf("\nMarks of the student in 5 subjects :");
            for (i=0;i<=4;i++){
                printf("\n The marks in subject %d is : %0.1f",(i+1),s[j].marks[i]);  
            }
            printf("\nThe total marks obtained by the student is : %0.1f",s[j].total);
            printf("\nThe total percentage obtained by the student is : %0.1f",s[j].percentage);
            bol++;
        }
    }
    if(bol ==0 ){
        printf("Details Not found!!!!!!!!!!!!!!");
    }
}

//function to display the details for all the students having percentage in given range.

void percentagesearch(int n ,float l ,float u, struct student *s){
    int i ,j ,bol=0;
    for (j = 0; j < n; j++ ){
        if (s[j].percentage >= l &&s[j].percentage <= u){
            bol++;
            printf("\n\n\n<------------details found--------------->");
            printf("\nName of the student is : %s",s[j].name);
            printf("\nRoll No. of the student  is : %d",s[j].rollno);
            printf("\nMarks of the student in 5 subjects :");
            for (i=0;i<=4;i++){
                printf("\n The marks in subject %d is : %0.1f",(i+1),s[j].marks[i]);  
            }
            printf("\nThe total marks obtained by the student is : %0.1f",s[j].total);
            printf("\nThe total percentage obtained by the student is : %0.1f",s[j].percentage);
        }
    }
    if (bol == 0){
            printf("\n\nNo student found in the given range");
    }
    else{
        printf("\n\nNumber of students in the givern ranges is %d.",bol);
    }
}

// function to sort the array in ascending order of marks.

void sort(int n , struct student *s){
    int i ,j ,bol=0;
    struct student temp;
    for (i = 0; i < (n-1); i++ ){
        bol =0;
        for (j = 0; j < (n-1) ; j++ ){
            if (s[j].total > s[j+1].total){
                temp = s[j] ;
                s[j]= s[j+1];
                s[j+1] = temp;
                bol++;
            }
        }
        if (bol ==0){
            break;
        }
    }
}