/*write a program which accept number from user and count frequency of
2 in it 
input:2395
output:1

input:1018
output:0*/

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
   int icount= 0;

   while (iNo !=0)
   {
      iDigit=iNo %10;
      if(iDigit==4)
      {
         icount++;
      }
      iNo = iNo /10;

   }
   return icount;
   
}
int main ()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number.");
    scanf("%d",ivalue);

    iRet = CountFour(ivalue);

    printf("%d",iRet);
    return 0;
}