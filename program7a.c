#include<stdio.h>
//input:  5
//output: * * * * * # # # # #
//***

void Dispaly(int iNo)
{
   int i=1 ;

   for(i=1;i<=iNo;i++)
   {
    printf("*\t");
   }
   for ( i = 1; i <=iNo; i++)
   {
    printf("#\t");
   }
   
    
}
int main()
{
    int iValue =0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Dispaly(iValue);

    return 0;
}