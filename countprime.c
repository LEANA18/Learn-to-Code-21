//Write a C program to find the number of prime numbers in a array of integers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[100],i,n,j,p,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=2;
        p=1;
        while(j<a[i])
        {
            if(a[i]%j==0)
            {
                p=0;
                break;
            }
            j++;
        }
        if(p==1)
        {
            count++;
        }
    }
printf("%d",count);
     
    return 0;
}
