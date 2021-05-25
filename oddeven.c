/*Write a C program to find the frequency of odd and even numbers in the 1D array.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p,i;
    int even=0,odd=0;
    int a[20];
    
    scanf("%d",&p);
    
    for (i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
        ++even;
        }
        else
        {
        ++odd;
        }
    }
    printf("%d\n",even);
    printf("%d",odd);
    

      
    return 0;
}
