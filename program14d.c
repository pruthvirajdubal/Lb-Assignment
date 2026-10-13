/*Accept n number from user and return frequency of 11 from it*/

//input:6
//  element  :85  66  3 80 93 88

//output: 0

//input:6
//   element   :85  66  3 80 93 88

//output: 2

#include <stdio.h>
#include<stdlib.h>

typedef int BOOL;

int Frequency(int Arr[],int iLength)
{
    int iCnt=0;
    int iFrequency=0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }


}

int main(void)
{
    int iSize = 0;
    int  iRet = 0;
    int iCnt = 0;
    int *p = NULL;
    
printf("ENter number of elements");
scanf("%d",&iSize);

p = (int *)malloc(iSize * sizeof(int));

if(p==NULL)
{
    printf("unable to allocate memory");
    return -1;
}
printf("Enter %d elments",iSize);

for(iCnt=0;iCnt<iSize;iCnt++)
{
    printf("Enter element:%d",iCnt+1);
    scanf("%d",&p[iCnt]);
}

iRet = Frequency(p,iSize);

printf("%d",iRet);

free(p);
return 0;

}