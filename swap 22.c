/*Write a C program to swap the values of two variables.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int,int);
void swap(int a,int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    
    printf("a=%d b=%d",a,b);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    swap(a,b);
    

       
    return 0;
}
