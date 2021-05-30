

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100][100],b[100][100],product[100][100];
    int arow,acolumn;
    int brow,bcolumn;
    int sum=0;
    int i,j,k;
    
    scanf("%d%d",&arow,&acolumn);
    
    for(i=1;i<=arow;i++)
    {
        for(j=1;j<=acolumn;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
   scanf("%d%d",&brow,&bcolumn);
    
        for(i=1;i<=brow;i++)
    {
        for(j=1;j<=bcolumn;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    
    
    if(acolumn!=brow)
    {
        printf("ERROR");
    }
    else
    { 
        for(i=1;i<=arow;i++)
       {
           for(j=1;j<=bcolumn;j++)
           {
               for(k=1;k<=brow;k++)
               {
                   sum=sum+(a[i][k]*b[k][j]);
               }
               product[i][j]=sum;
               sum=0;
           }
       } 
    
    
    for(i=1;i<=arow;i++)
    {
        for(j=1;j<=bcolumn;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    } 
    return 0;
}
}
