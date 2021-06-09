/*Write a C program to find the second maximum element in an array of integer elements*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>

int main() {
    int*a,n,i,max,second_max;
    
    scanf("%d",&n);
    a=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=INT_MIN;
    second_max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            second_max=max;
            max=a[i];
        }
        else if(a[i]>second_max&&a[i]!=max)
        {
            second_max=a[i];
        }
    }
    printf("%d",second_max);
    

      
    return 0;
}
