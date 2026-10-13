/*WHICH ACCEPT RADIUS OF CIRCLE FROM USER AND CALCULATE ITS ARE 
CONSIDER VALUE IF PI 3.14*/
#include<stdio.h>
double CircleArea (float fRadius)
{
    float Area =0.0f;
    const float pi=3.14f;
    Area=pi *fRadius*fRadius;

    return Area;
}

int main ()
{
    int fvalue =0.0f;
    double dRet =0;

    printf("Enter number:");
    scanf("%f",&fvalue);

    dRet=CircleArea(fvalue);

    printf("Area of circle :%d\n",dRet);

    return 0;
}