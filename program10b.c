/*write program which Accept width & hight from user
and calculate Area (Are =width *Hight)*/
#include<stdio.h>
doubleRectArea(float fwidth,float fHight)
{
    double Area=0.0;
    double Area=fwidth*fHight;

    return Area;
}
int main()
{
    float fvalue1 =0.0;
    float fvalue2=0.0;
    double dRet = 0.0;

    printf("Enter widht.");
    scanf("%f",&fvalue1);

     printf("Enter Hight.");
    scanf("%f",&fvalue2);

    dRet =doubleRectArea(fvalue1,fvalue2);

    printf("Area is %f",dRet);

    return 0;
}
