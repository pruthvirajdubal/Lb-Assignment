/*Accept number from user and display aii such element which
are divisible by 5*/

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int icnt =0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt] %5==0)
        {
            printf("%d\t",Arr[icnt]);
        }
    }
}
int main ()
{
    int iSize=0,iRet= 0, iCnt= 0;
    int *p = NULL;

    printf("enter number of element:");
    scanf("%d",&iSize);

    p= (int *)malloc(iSize * sizeof(int));
    
    if(p== NULL)
    {
        printf("unable to allocate memory:");
        return -1;
    }
    printf("Enter %d element",iSize);

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);

    free(p);
    
    return 0;
}