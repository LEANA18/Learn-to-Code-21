/*Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c,D,root1,root2,realpart,imagpart;
    scanf("%f%f%f",&a,&b,&c);
    D = b*b-4*a*c;
    
    
    
    if(D>0) 
    {
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("Distinct Real : %.2f , %.2f",root1,root2);
    }
    
    else if(D==0) 
    {
        root1=root2=-b/(2*a);
        printf("Equal Real: %.2f , %.2f",root1,root2);
    }
    
    else {
        realpart=-b/(2*a);
        imagpart=sqrt(-D)/(2*a);
        printf("Complex: %.2f + i%.2f , %.2f - i%.2f",realpart,imagpart,realpart,imagpart);
    }
    
    
       
    return 0;
}
