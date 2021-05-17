/*WACP to determine if a triangle is valid from the given sides.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>=c)
    {
        printf("Yes\n");
    }
    else if (a+c>=b)
    {
        printf("Yes\n");
    }
    else if (b+c>=a)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }    
    return 0;
}
