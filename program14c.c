/*Accept n number from user check whether that numbers contain 11 in it or not*/

//input:6
//      :85  66  11 80 93 88

//output: 11 is present

//input:6
//      :85  66  3 80 93 88

//output: 11 is absent

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }

    return FALSE;
}

int main(void)
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    if (iSize <= 0)
    {
        printf("Invalid number of elements\n");
        return -1;
    }

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize);

    if (bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);
    return 0;
}