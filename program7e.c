#include<stdio.h>
/*WRITE PROGRAM DIFFRENCE BETWWEN EVEN FACTORIAL AND ODD FACTORIAL*/
//intput:5
//output:-7  (8-15)

int FactorDiff(int iNo)
{
    int iCnt=0;
    int iEven=1;
    int Odd=1;

    if(iNo<0)
    {
        iNo =-iNo;
    }
    //Even
    for(iCnt=2;iCnt<=iNo;iCnt=iCnt+2)
    {
        iEven=iEven*iCnt;
    }
    //odd
    for(iCnt=1;iCnt<=iNo;iCnt+=2)
    {
        Odd =Odd *iCnt;
    }
        return Odd -iEven;
}
int main ()
{
    int ivalue =0;
    int iRet =0;

    printf("Enter numer:");
    scanf("%d",&ivalue);
 
   iRet= FactorDiff(ivalue);

   printf("Diffrence Factores:%d\n",iRet);

    return 0;
}