/*Write a C program to check whether a number present in the 1D array or not.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int i,j;
    int a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("%d is present in this array\n",j);
            break;
        }
    }
        if(i==n)
        {
            printf("%d is not present in this array",j);
            
        }
    
    
    

    

      
    return 0;
}
