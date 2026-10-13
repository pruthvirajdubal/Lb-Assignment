#include<stdio.h>
#include<stdlib.h>
/*Accept N nunber of user and retuen diffrence between feequency
of Even Number and Odd Number*/

int Frequency(int Arr[],int iLength)
{
     int icnt = 0,iEven= 0,iOdd=0;

    for(icnt=0;icnt<iLength;icnt++)
    {
        if(Arr[icnt] % 2 == 0)
        {
            iEven++;
        }
        else 
        {
            iOdd++;
        }
    }
    return iEven-iOdd;
}
int main()
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
    iRet =Frequency(p,iSize);

    printf("Result is %d",iRet);

    free(p);
    return 0;

}