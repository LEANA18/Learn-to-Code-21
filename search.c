*/Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int r, c, search,i,j,count=0;



int myarray[10][10];

scanf("%d%d",&r,&c);

for(i=0; i<r; i++)

{

  for(j=0; j<c; j++)

  {

    scanf("%d", &myarray[i][j]);

  }

}

scanf("%d",&search);

for (int i=0 ;i<r; i++)

{

  for (int j=0;j<c;j++)

  {

    if (myarray[i][j]==search)

    {

      printf ("Element found at (%d,%d)\n",i, j);
      count++;

    }
    
  }

}
if (count==0)
  printf("Element is not found");

    
 return 0;
}
