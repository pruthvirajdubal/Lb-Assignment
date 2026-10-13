#include<stdio.h>
/*Accept temprature in fahrenheight convert into celsius*/

double FhtoCs(float iTemp)
{
     double dCelsius =0.0;
     dCelsius = iTemp -32*(5.0/9.0);
     return dCelsius;

}
int main()
{
    float fvalue = 0.0;
    double dRet =0.0;

    printf("Entemprature in fahreneight:");
    scanf("%f",&fvalue);

    dRet=FhtoCs(fvalue);
   
    printf("%f",dRet);

    return 0;
}