#include<stdio.h>
/*write a PROGRAM PRINT ODD FACTORIAL

input: 5
output:15 (5*3*1)
*/
int OddFactorial(int iNo)
{
    int iCnt =0;
    int iFact =1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for ( iCnt = 1; iCnt <= iNo; iCnt+=2)
    {
        iFact = iFact *iCnt;
    }
    return iFact;
}
int main()
{
    int ivalue =0;
    int iRet =0;

    printf("Enter number:");
    scanf("%d",&ivalue);

    iRet=OddFactorial(ivalue);
    printf("Odd Factorial%d\n",iRet);


    return 0;

}