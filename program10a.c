#include<stdio.h>
/*which accept radius of circle frome user and calculate its area
consider value or PI as 3.14 (Area =PI*Radius*Radius)*/
//input:5.3
//output:88.2026
double CircleArea(float fRadius)
{
    double PI=3.14;
    double Area=0.0;
    Area =PI * fRadius*fRadius;

    return Area;

}

int main ()
{
    float fvalue =0.0;
    double dRet = 0.0;

    printf("Enter Radius.");
    scanf("%f",&fvalue);

    dRet =CircleArea(fvalue);

    printf("Area is %f",dRet);

    return 0;
}