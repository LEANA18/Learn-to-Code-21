#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b) &&(a>c)){
        printf("%d\n",a);
    }
    if  ((b>a)&& (b>c)){
        printf("%d\n",b);
    }
    if ((c>a)&& (c>b)){
        printf("%d\n",c);
    }
    if((a<b)&&(a<c)){
        printf("%d\n",a);
    }

        if((b<a)&&(b<c)){
            printf("%d\n",b);
        }
        if((c<a)&&(c<b)){
            printf("%d\n",c);
        }




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}