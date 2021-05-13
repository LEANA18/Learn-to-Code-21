#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float b,c,d,e;
    int aos;
    float aoc,aot;
    scanf("%f%f%f%f",&b,&c,&d,&e);
    aos = b*b;
    aoc= 3.14*c*c;
    aot = 0.5*d*e;
    printf("%d\n",aos);
    printf("%.1f\n",aoc);
    printf("%.2f\n",aot);



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
