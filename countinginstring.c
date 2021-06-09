//Write a C program to count and display the number of Vowels, Consonants and spaces in a string

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char l[100];
    int v,c,s;
    v=c=s=0;
    fgets(l,sizeof(l),stdin);
    
    for(int i=0;l[i]!='\0';++i)
    {
        if(l[i]=='a'||l[i]=='e'||l[i]=='i'||l[i]=='o'||l[i]=='u'||l[i]=='A'||l[i]=='E'||l[i]=='I'||l[i]=='O'||l[i]=='U')
        {
            ++v;
        }
        else if((l[i]>='a'&&l[i]<='z')||(l[i]>='A'&&l[i]<='Z'))
        {
            ++c;
        }
        else if(l[i]=' ')
        {
            ++s;
        }
    }
    printf("%d",v);
    printf("\n%d",c);
    printf("\n%d",s);
      
    return 0;
}
