#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char string[100] , string1[25] , string2[25];
    int i ,n, length, j, k=0, l , m , flag =1 , len1 , len2 ;
    char temp;
    printf("\n\nEnter the sentence to sort the words : ");
    gets(string);
    printf("You have entered :%s",string);
    length = strlen(string);
    while (flag !=0){
        flag = 0;
        k=0;
        i=0;
        while (string[i] != '\0'){
            len1 = 0;
            len2 = 0;
            while ((string[i]!=' ') && (string[i]!='\0') ){
            string1[len1] = string[i]; 
            i++;
            len1++;
            }
            if (string[i] == '\0'){
                break;
            }
            string1[len1] ='\0';
            i++;
            while ((string[i]!=' ') && (string[i]!='\0') ){
            string2[len2] = string[i];
            i++;
            len2++; 
            }
            string2[len2] ='\0';
            m = strcmp(string1 ,string2);
            if (m>0){
                flag +=1;
                for (j=0; j<len2 ; j++){
                    string[k] = string2[j]; 
                    k++ ;
                }
                string[k] = ' ';
                k++;
                for (j=0; j<len1 ; j++){
                    string[k] = string1[j]; 
                    k++;
                }
                if (k==length){
                string[k] = '\0';
                }
                else{
                  string[k] = ' ';  
                }
                i = i-len1;
                k = (k-len1);
            }
            else{
                flag +=0;
                i = i-len2;
                k = (k + len1+1); 
            }
        }
    }
    printf("\nThe sentence after sorting every words = \n%s\n\n",string);
    return 0;
}