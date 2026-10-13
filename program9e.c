#include<stdio.h>
/* dispaly diffrence between summation of even and summaion of odd digit*/
//input:2395            1018
//output:-15(2-17)       6(8-2)
int CountDiffrence(int iNo)
{
    int iDigit =0, iEvenSum=0, iOddSum=0;

    if(iNo >0)
    iNo = -iNo;

    while(iNo >0)
    {
        iDigit =iNo %10;

        if(iDigit %2 ==0)
        {
            iEvenSum =iEvenSum =iDigit;
        }
        else 
        {
            iOddSum =iOddSum +iDigit;
        }
        iNo =iNo /10;

    }
    return iEvenSum- iOddSum;

}
int main ()
{
    int ivalue =0 ;
    int iRet = 0;

    printf("Enter number:");
    scanf('%d',&ivalue);

    iRet =CountDiffrence(ivalue);
  
   printf("%d",iRet);

    return 0;
}