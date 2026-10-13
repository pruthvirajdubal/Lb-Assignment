
/*write program which accept number user and check whether it contains 0
 in it or not*/
 //input:2395
 //output:there is no zero
 //input:1018
 //output: it contains Zero
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo !=0)
    {
        iDigit = iNo %10;
        if (iDigit==0)
        {
            return TRUE;
        }
        iNo = iNo /10;
    }
    return FALSE;
    

}

int main ()
{
    int ivalue = 0;
        BOOL bRet =FALSE;

        printf("Enter number..");
        scanf("%d",&ivalue);

        bRet = CheckZero(ivalue);

        if(bRet==TRUE)
        {
            printf("it contains Zero");
        }
        else
        {
            printf("ther is no Zero");
        }


    return 0;
}
