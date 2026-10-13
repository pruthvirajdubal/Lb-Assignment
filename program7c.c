#include<stdio.h>

//input:5
//output:8   (4*2)
/*WRITE APROGRM TO FIND EVEN FACRIIAL*/

 int EvenFactorial(int iNo)
 {
    int iCnt =0;
    int iFact =0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for ( iCnt = 2; iCnt < iNo; iCnt+2)
    {
        iFact = iFact *iCnt;
    }
    return iFact;
    
    
 }
int main() 
{
    int iValue =0;
    int iRet =0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even factorial %d\n",iRet);

    return 0;
}