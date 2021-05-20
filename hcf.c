/*c program to print the hcf of two numbers*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    int i,j,h;
    scanf("%d%d",&a,&b);
    j=(a>b)?a:b;
    for(i=1;i<=j;i++)
    {
        if (a%i==0&&b%i==0)
        {
            h=i;
        }
    }
    printf("%d",h);
    

     
    return 0;
}
