/*Write a program in C to Find the Frequency of Characters.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a, s[100];
    int i,n = 0;
    gets(s);
    scanf("%c",&a);
    
    for(i=0;s[i]!='\0';++i)
    {
        if (a==s[i])
            n++;
    }
    printf("%d",n);
    
    
    
     

       
    return 0;
}
