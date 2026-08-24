#include<stdio.h>
//input:2
//output:2 4 6 8 10 12 14
void table(int ino)
{
    int i=0;
    for(i=1;i<=7;i++)
    
    {
            printf("%d ",ino*i);

    }
}

int main()
{
    int ivalue =0;

    printf("Enter number..");
    scanf("%d",&ivalue);

    table(ivalue);


    return 0;
}