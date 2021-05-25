/*Write a C program to change the case of alphabets.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0;
    char a, s[100];
    gets(s);
    while(s[i] != '\0')
    {
        a = s[i];
        if(s[i] >= 'A' && s[i] <= 'Z')
        s[i] = s[i] + 32;
        else if(s[i] >= 'a'&& s[i] <= 'z')
        s[i] = s[i] - 32;
        i++;
    }
        printf("%s\n",s);
    
    
    
    
    

        
    return 0;
}
