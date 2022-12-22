#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],st[100];
    int j=1;
    printf("Enter a string: ");
    gets(str);
    for(int i=0;i<=strlen(str);i++)
    {
        if(str[i]==' ')
        {
            st[j]=str[i+1];
            j++;
        }
    }
    st[0]=str[0];
    st[j]='\0';
    printf("First letter of words:%s",st);
}