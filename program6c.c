#include<stdio.h>
//input:5
//output:120

int Factorial(int ino)
{
    int  i=0;
    int fact =1;

    for (int i=1;i<=ino;i++)
    {
        fact =fact *i;
    }
    printf("%d",fact);
}
int main()
{
    int ivalue =0;

    printf("Enter number..");
    scanf("%d",&ivalue);

    Factorial(ivalue);

    return 0;
}