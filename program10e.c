#include<stdio.h>
/*write a program whch Accept area in square feet and convert 
it into squre meter (1 square feet =0.0929 square meter)*/
//input: 5                 7
//output: 0.464515         0.650321

double SqureMeter(int ivalue)
{
    double dmeter =0.0;
    dmeter=ivalue*0.0929;

    return dmeter;

}

int main ()
{
    int ivalue =0;
    double dRet=0.0;

    printf("Enter Area in Square feet");
    scanf("%d",&ivalue);

    dRet =SqureMeter(ivalue);

    printf("convert square feet into square meter %d",dRet);


    return 0;
}