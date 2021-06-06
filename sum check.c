/*Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sum(int,int);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    sum(a,b);
    
    return 0;
}

void sum(int a,int b)
{
    int add,i,p=0;
    int rev=0,remainder;
    add=a+b;
    printf("%d\n",add);
    if(add%2==0)
    {
        while(add!=0){
            remainder=add%10;
            rev=rev*10+remainder;
            add/= 10;
        }
        printf("%d",rev);
    }
    else{
        for(i=1; i<=add; i++)
   {
      if(add%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("Prime");
   }
   else
   {
      printf("Not prime");
   }
    
}
}
    
    

    
    

