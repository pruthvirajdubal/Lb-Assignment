#include<stdio.h>
/*
if number is less then 50 then print small.
if it is greter than 50 and less than 100 then
print medium.
if it is greter than 100 print large*/
void Number(int ino)
{
    int i;

    if(i<50)
    {
        printf("Small");
    }
    else if(i>50 && i<100)
    {
        printf("mdium..");
    }
    else
    {
        printf("large");
    }
}

int main()
{
    int ivalue=0;

    printf("Enter the number...");
    scanf("%d",&ivalue);


    Number(ivalue);


    return 0;
}