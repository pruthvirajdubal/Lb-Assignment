#include<stdio.h>
//input:2395   1018
//output:3     2

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo<0)
    {
        iNo =-iNo;

        if(iNo==0)
        return 0;

        while (iNo>0)
        {
            iDigit =iNo%10;

            if(iDigit %2 !=0)
            {
                iCount++;
            }
            iNo =iNo/10;
        }
        return iCount;
        
    }


}
int main ()
{
    int ivalue = 0;
    int iRet =0 ;

    printf("Ente number:");
    scanf("%d",&iRet);

    iRet=CountOdd(ivalue);

    printf("%d",iRet);

    return 0;
}