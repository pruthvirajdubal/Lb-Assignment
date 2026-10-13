#include<stdio.h>
/* wright program which accept width &hight of rectangle frome user and 
calculate its Area */

double RectArea(float fwidth ,float fhight)
{
    float Area =0.0f;

    Area = fwidth * fhight;
}
int main ()
{
    float fvalue1=0.0f,fvalue2 =0.0;
    double dRet = 0.0;

    printf("Enter width:");
    scanf("%f",&fvalue1);

     printf("Enter Hight:");
    scanf("%f",&fvalue2);

    dRet=RectArea(fvalue1,fvalue2);

    printf("Area of Rectangle:%lf\n",dRet);

    return 0;
}