#include<stdio.h>
/*WRITE A PROGRAM WHICH ACCEPT RANGE FROM USER AND DISPLAY
ALL EVEN NUNBER IN BETWEEN RANGE
IN:23  35
OP: 24 26 28 30 32 34*/

int RangeDisplayEven(int iStart,int iEnd)
{
    int icnt = 0;
    for(icnt= iStart;icnt <=iEnd;icnt++)
    {
        if (icnt % 2 ==0)
        {
            printf("%d ",icnt);
        }
    }

}

int main()
{
    int ivalue1=0, ivalue2=0;

    printf("Enter Starting point:");
    scanf("%d",&ivalue1);

     printf("Enter Ending point:");
    scanf("%d",&ivalue2);

    RangeDisplayEven(ivalue1,ivalue2);
    return 0;
}