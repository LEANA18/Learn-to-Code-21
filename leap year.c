#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int y;
    scanf("%d",&y);
    if ((y%400==0)||((y%4==0)&&(y%100!=0))){
        printf("Yes");
    }
    else {
           printf("No");
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
