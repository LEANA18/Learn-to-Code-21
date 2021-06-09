//Write a C program to check whether a given number is amstrong or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void ams(int);

int main() {
    int n;
    scanf("%d",&n);
    ams(n);
    
}
void ams(int n)
{
    int q=n,count=0,result=0,multi=1,rem,c;
        while(q!=0)
        {
            q=q/10;
            count++;
        }
    c=count;
    q=n;
    while(q!=0)
    {
        rem=q%10;
        while(c!=0)
        {
            multi=multi*rem;
            c--;
        }
        result=result+multi;
        c=count;
        q=q/10;
        multi=1;
    }
    if(result==n)
    {
        printf("Amstrong");
    }
    else{
        printf("Not Amstrong");
    }


   
    return 0;
}
