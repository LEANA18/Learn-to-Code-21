/*Write a C Program to arrange the elements in ascending order.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100];
    int i,j,n,temp;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<(n-1);i++)
        {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
         {
             temp = a[j];
             a[j] = a[j+1];
             a[j+1] = temp; 
         } 
        }
        }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    

        
    

       
return 0;
}
