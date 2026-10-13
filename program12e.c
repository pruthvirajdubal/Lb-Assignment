/* write a program which accept number from user and count
frequency of such a digits which are less than 6*/
//intput:2395
//output:3
//input:966771
//output:1

#include<stdio.h>

int Count(int iNo)
{
    int iDigit= 0;
    int icount = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
    {
        iDigit=iNo%10;

        if(iDigit <6)
        {
            icount++;
        }
        iNo = iNo /10;
    }
    return icount;
}
int main ()
{
    int ivalue=  0;
    int iRet = 0;

    printf("Enter number.");
    scanf("%d",&ivalue);

    iRet = Count(ivalue);

    printf("%d",iRet);
     return 0;
}