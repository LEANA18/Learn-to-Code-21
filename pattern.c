/*write a c program to print the following number pattern image*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,b,r;
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        for(b=r;b>i;b--)
        {
            printf(" ");
        }
        for(b=1;b<=i;b++)
        {
          printf("%d", i);  
        }
    printf("\n");
    }

    
    return 0;
}
