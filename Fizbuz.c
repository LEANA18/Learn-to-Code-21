#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    for(int i=1;i<=100;i++)
      if(i%15 == 0){
        printf("FIZZBUZZ\t");
    }
    else if(i%5 == 0){
        printf("BUZZ\t");
    }
    else if(i%3 == 0){
        printf("FIZZ\t");
    }
    else
        printf("%d\t",i);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
