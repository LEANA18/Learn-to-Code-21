#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float fahrenheit ,celsius;
    scanf("%f", &fahrenheit);
    celsius = ((fahrenheit-32)*5)/9;
    printf("%.2f",celsius);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
