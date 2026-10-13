#include<stdio.h>
 //square feet convert square meter
 //input: 5
 //output: 0.464515

 double SquareMeter(int ivalue)
 {
    double result=0.0;
    result =ivalue *0.092903;
    return result;

 }
int main ()
{
    int ivalue= 0;
    double dRet=0.0;

    printf("Enter square area in feet:");
    scanf("%d",&ivalue);
    
     dRet =SquareMeter(ivalue);
     printf("squqre feet convert into suqre meter:",dRet);


    return 0;
}