/* write a program which accept range from user and return addition
    of all numbers in between that range
    input: 23  30
    output:212
    input:10  18
    output: 126*/
    #include<stdio.h>
    int RangeSum(int iStart, int iend)
    {
        int icnt = 0;
        int isum = 0;

        for(icnt =iStart;icnt<=iend;icnt++)
        {
            isum = isum +icnt;
        }
        return isum;

    }
    int main()
    {
        int ivalue1 = 0,ivalue2=0,iRet = 0;

        printf("Enter starting number..");
        scanf("%d",&ivalue1);

         printf("Enter Ending number..");
        scanf("%d",&ivalue2);

        iRet = RangeSum(ivalue1,ivalue2);

        printf("Addition is %d",iRet);
        return 0;
    }