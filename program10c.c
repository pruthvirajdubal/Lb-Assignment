
//input:12
//output:12000
/* Accept distance convert km to meter*/
#include<stdio.h>
int KMMeter(int iNo)
{
    int imeter =0;
    imeter =iNo *1000;

    return imeter;

}
int main ()
{
    int ivalue = 0,iRet =0;

    printf("Enter distance:");
    scanf("%d",&ivalue);

    iRet =KMMeter(ivalue);

    printf("kilometer to meter is: %d\n",iRet);
    return 0;
}