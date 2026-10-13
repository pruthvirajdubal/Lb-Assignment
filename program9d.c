#include<stdio.h>

int multDigit(int iNo)
{
    int iDgit =0,iMult =1;

    if(iNo<0)
    iNo = -iNo;

    if(iNo==0)
    return 0;

    while (iNo >0)
    {
        iDgit =iNo %10;

        if(iDgit !=0)
        {
            iMult=iMult *iDgit;
        }
        iNo =iNo /10;
    }
    return iMult;

    }


int main ()
{
    int ivalue =0 ;
    int iRet =0;

    printf("Enter number:");
    scanf("%d",&ivalue);

    printf("%d",iRet);

   iRet=multDigit(ivalue);

    return 0;
}