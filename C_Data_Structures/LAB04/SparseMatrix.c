#include<stdio.h>

int calcnonzero(int m,int n,int d[m][n]);
void display(int [][3]);
 

void main(){
    int i,j,k=0,l,m,n;
    printf("Enter the dimension of matrix(m*n)");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the array :");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    l=calcnonzero(m,n,a);
    if(l<(((m*n)+1)/2)){
        int m1[l+1][3];
        m1[k][0]=m;
        m1[k][1]=n;
        m1[k][2]=l;
        k++;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(a[i][j]!=0){
                    m1[k][0]=i;
                    m1[k][1]=j;
                    m1[k++][2]=a[i][j];
                }
            }
        }
        printf("For matrix a :\n");
        display(m1);
    }
    else{
        printf("more than equal to 50%% elements are non zero!!! Matrix is not sparse!!!");
    }
}


void display( int d[][3]){
    int i,j;
    printf("Row\tColumn\tElement\n");
    for(i=0;i<=d[0][2];i++){
        for(j=0;j<3;j++){
            printf("%d\t",d[i][j]);
        }
        printf("\n");
    }
}

int calcnonzero(int m,int n,int d[m][n]){
    int i,j,o=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(d[i][j]!=0){
                o++;
            }
        }
    }
    return o;
}