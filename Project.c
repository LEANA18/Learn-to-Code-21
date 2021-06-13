//Calender
#include <stdio.h>
void printmonth(int day,int days);


int main(void)
{
    printmonth(2,29);
    return 0;
    return 0;
}
void printmonth(int day, int days)
{
    int week;
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    printf("--- --- --- --- --- --- ---\n");
    
    for (week=0;week<day;week++)
    {
        printf("    ");
    }
    for(int daycount=1;daycount<=days;daycount++)
    {
        if (week>6)
        {
            printf("\n");
            week=1;
        }
        else
        {
            week++;
        }
        printf("%3d ",daycount);
    }
    printf("\n--- --- --- --- --- --- ---\n");
    return;
}
