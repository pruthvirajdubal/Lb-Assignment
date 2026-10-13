#include<stdio.h>
//input: 23   35
//output:23 24 25 26 27 28 29 20 31 32 33 34 35

/*input:10  18
* output:10 11 12 13 14 15 16 17 18 */

void RangeDisplay(int iStart,int iEnd)
{
    int icnt = 0;

    for(icnt=iStart;icnt <=iEnd;icnt++)
    {
        printf("%d ",icnt);
    }
}

int main()
{
    int ivalue1=0,ivalue2=0;

    printf("Eter Starting point:");
    scanf("%d",&ivalue1);

    printf("Eter Ending point:");
    scanf("%d",&ivalue2);

    RangeDisplay(ivalue1,ivalue2);

    return 0;
}