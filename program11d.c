/*write a program which accept from user return addition of all even
numbers in between that Range(Range only positive number)
input: 23 30
output: 108

input:10 18
output:70*/
#include<stdio.h>
int RangeSumEven(int iStart,int iEnd)
{
        int iCnt= 0;
        int iSum = 0;

        for(iCnt =iStart;iCnt<=iEnd;iCnt++)
        {
                if(iCnt % 2==0)
                {
                        iSum= iSum+iCnt ;
                }
        }
    
}

int main()
{
     int ivalue1 = 0,ivalue2=0,iRet = 0;

        printf("Enter starting number..");
        scanf("%d",&ivalue1);

         printf("Enter Ending number..");
        scanf("%d",&ivalue2);

        iRet = RangeSumEven(ivalue1,ivalue2);

        printf("Addition is %d",iRet);


        return 0;
}