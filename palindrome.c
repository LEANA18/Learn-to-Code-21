/*Write a C Program to identify if a number is a palindrome or not.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,r,a,b;
    scanf("%d",&n);
    a=0;
    b=n;
    while(n>0)
    {
        r=n%10;
        a=(a*10)+r;
        n=n/10;
    }
    if(b==a)
    
        printf("Yes");
    else
        printf("No");
    
    
    
    
    
        

       
    return 0;
}
