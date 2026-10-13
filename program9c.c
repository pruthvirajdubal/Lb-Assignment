#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit =0;
    int iCount =0;

    if(iNo <0)
    iNo = -iNo;

    while (iNo>0)
    {
        iDigit =iNo %10;
        
        if(iDigit >0 && iDigit <7)
        {
            iCount++;
        }
        iNo =iNo/10;
    }
    return iCount;
    
}
int main ()
{
    int ivalue =0,iRet =0;

    printf("Enter number..");
    scanf("%d",&ivalue);
    
    iRet=CountRange(ivalue);
    printf("%d",iRet);


    return 0;
}