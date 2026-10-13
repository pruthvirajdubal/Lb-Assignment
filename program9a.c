#include<stdio.h>
/*calculate time complexcity 9 all program*/
//input:2395         1018          -1018
//output:1             2             2

int CountEven(int iNo)
{
    int iDigit= 0;
    int icount =0;

    if (iNo<0)
    {
        iNo=-iNo    ;
    }
    if(iNo==0)
    
        return 1;
    
        while (iNo >=0)
        {
        iDigit =iNo % 10;

        if(iDigit %2==0)
        {
            icount++;
        }
        iNo = iNo /10;
    }
    return icount;
    

}
int main()
{
    int ivalue =0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&ivalue);

    iRet =CountEven(ivalue);

    printf("%d",iRet);


    return 0;
}