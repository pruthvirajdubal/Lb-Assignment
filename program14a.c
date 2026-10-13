/*Accet n number from user and return ferquency of
even number*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{ 
    int icnt = 0,icount= 0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt] %2 == 0)
        {
            icount++;
        }
    }
    return icount;
}
int main ()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of element..");
    scanf("%d",&iSize);

    p= (int *)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory:");
        return -1;
    }
    printf("Enter %d element",iSize);

    for ( iCnt = 0; iCnt <iSize; iCnt++)
    {
        printf("Enter element :%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven(p,iSize);

    printf("Result is %d",iRet);

    free(p);
    return 0;
}