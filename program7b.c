#include<stdio.h>
/*
Accept Amount US  doller return is corrsponding value int indian currency
consider as 70 re*/
//inpu:10
//output:700

int DollerToIndia(int iNo)
{
    int Ans=0;
    Ans=iNo*70;
    return Ans;
}

int main()
{

    int Ivalue= 0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&Ivalue);

    iRet = DollerToIndia(Ivalue);

    printf("value INR is %d\n",iRet);


    return 0;
}